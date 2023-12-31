#!/usr/bin/env bash
set -euo pipefail
IFS=$'\n\t'
set -x

# robot.sh: runs the main robot container.

disable_rebuild=false
while getopts 'd' OPTION; do
    case "$OPTION" in
        d)
            disable_rebuild=true
            ;;
    esac
done

DIR=../
IMAGE_NAME=lunabotics-2023-ros
CONTAINER_NAME=lunabotics-2023-robot

# Ensure CAN is up-to-date.
make -C $DIR/can/bus_spec

# Always run as root.
[ "$UID" -eq 0 ] || exec sudo bash "$0" "$@"

if [ "$HOSTNAME" = "luna-jetson" ]; then
    # Set up DNS because it keeps messing itself up.
    systemd-resolve --set-dns 8.8.8.8 --interface wlan0
fi

# Build the image.
if ! $disable_rebuild; then
    docker build "$DIR" -f "$DIR"/Dockerfile_full_build -t $IMAGE_NAME
fi

#it=$(ip addr | grep 'state UP' -A2 | tail -n1 | awk '{print $2}' | cut -f1  -d'/')
it=192.168.1.43

LOG_FILE="/var/log/rosbags/$(date -Iseconds)"
LOG_DIR="$(dirname "$LOG_FILE")"
mkdir -p "$LOG_DIR"

params=(
    # Detach from the container, and create a fake virtual terminal.
    -dt

    # Use host's network interfaces to listen to ROS, and operate the
    # CAN bus.
    --network=host
    --runtime=nvidia

    # Allow access to devices.
    --volume=/dev:/dev

    --volume=/media:/media

    # Allow access to writing logs.
    --volume="$LOG_DIR":"$LOG_DIR"

    # Device rules for accessing Realsense cameras.
    --device-cgroup-rule "c 81:* rmw"
    --device-cgroup-rule "c 189:* rmw"

    # Environmental variables
    -e ROS_MASTER_URI=http://$it:11311
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
docker run "${params[@]}" $IMAGE_NAME roscore

sleep 2

# # Set up rosbag with a log file.
# docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
#        rosbag record -aO "$LOG_FILE"

# Run the camera node.
docker exec -d $CONTAINER_NAME /ros_entrypoint.sh /scripts/unfuck_realsense

# Run the motor_bridge node.
docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    rosrun motor_bridge motor_bridge

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    roslaunch realsense2_camera rs_t265.launch \
    camera:=t265 \
    initial_reset:=true \
    reconnect_timeout:=10

# sleep 5

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    roslaunch realsense2_camera rs_camera.launch \
    camera:=d455_1 serial_no:=213522250920 \
    filters:=pointcloud depth_fps:=30 enable_color:=false \
    decimate_filter.enable:=true \
    depth_width:=640 \
    depth_height:=480 \
    host_performance:=2 \
    pointcloud_texture_stream:=RS2_STREAM_ANY
      
sleep 5

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    roslaunch realsense2_camera rs_camera.launch \
    camera:=d455_2 serial_no:=213522253528 \
    filters:=pointcloud depth_fps:=30 enable_color:=false \
    decimate_filter.enable:=true \
    depth_width:=640 \
    depth_height:=480 \
    host_performance:=2 \
    pointcloud_texture_stream:=RS2_STREAM_ANY
      
sleep 5

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    roslaunch realsense2_camera rs_camera.launch \
    camera:=l515_1 serial_no:=f1381818 \
    decimate_filter.enable:=true \
    depth_width:=640 \
    depth_height:=480 \
    filters:=pointcloud depth_fps:=30 enable_color:=false \
    host_performance:=2 \
    pointcloud_texture_stream:=RS2_STREAM_ANY
      
# sleep 5

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
    roslaunch realsense2_camera rs_camera.launch \
    camera:=l515_2 serial_no:=f0461308 \
    decimate_filter.enable:=true \
    depth_width:=640 \
    depth_height:=480 \
    filters:=pointcloud depth_fps:=30 enable_color:=false \
    host_performance:=2 \
    pointcloud_texture_stream:=RS2_STREAM_ANY

sleep 5
      
docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
       roslaunch david_config transform.launch

docker exec -d $CONTAINER_NAME /ros_entrypoint.sh \
       roslaunch david_config mapping.launch

docker exec -dt $CONTAINER_NAME /ros_entrypoint.sh roslaunch \
    david_navigation move_base.launch
