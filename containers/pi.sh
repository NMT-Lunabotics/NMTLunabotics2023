#!/usr/bin/env bash
set -euo pipefail
IFS=$'\n\t'
set -x

# robot.sh: runs the main robot container.

DIR=../
IMAGE_NAME=lunabotics-2023-ros
CONTAINER_NAME=lunabotics-2023-robot

# Ensure CAN is up-to-date.
make -C $DIR/can/bus_spec

# Always run as root.
[ "$UID" -eq 0 ] || exec sudo bash "$0" "$@"

# Build the image.
docker build "$DIR" -f "$DIR"/Dockerfile_full_build -t $IMAGE_NAME

it=$(ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print $2}' | cut -f1  -d'/')

params=(
    # Detach from the container, and create a fake virtual terminal.
    -dt

    # Use host's network interfaces to listen to ROS, and operate the
    # CAN bus.
    --network=host

    # Allow access to devices.
    --volume=/dev:/dev

    # Device rules for accessing Realsense cameras.
    --device-cgroup-rule "c 81:* rmw"
    --device-cgroup-rule "c 189:* rmw"
    --privileged

    # Environmental variables
    -e ROS_MASTER_URI=http://jetson:11311
    -e ROS_IP=$it

    # Name the container.
    --name=$CONTAINER_NAME
)

# Clean up the container if it's already running.
docker stop $CONTAINER_NAME || true
docker rm $CONTAINER_NAME || true

# Clean up on ctrl-C.
cleanup () {
    docker stop $CONTAINER_NAME || true
    docker rm $CONTAINER_NAME || true
    exit 1
}
trap cleanup INT

# Set up the ROS core.
docker run "${params[@]}" $IMAGE_NAME rosrun usb_cam usb_cam_node _image_width:=320 _image_height:=240 _framerate:=10
docker exec $CONTAINER_NAME /ros_entrypoint.sh roslaunch raspicam_node camerav1_1280x720.launch


