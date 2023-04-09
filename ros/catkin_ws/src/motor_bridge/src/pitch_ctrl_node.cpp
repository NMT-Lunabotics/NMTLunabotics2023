#include <iostream>

#include <ros/ros.h>
#include <unistd.h>

#include <std_msgs/String.h>

#include <motor_bridge/System.h>

#include "can/david.h"
#include "can_interface.hpp"

#define CAN_BUS "can0"
SocketCAN can;

enum motor { BOTH = 0, LEFT = 1, RIGHT = 2 };

void pitchCallback(const motor_bridge::System::ConstPtr &msg) {
    int dir = msg->pitch.direction;
    motor m = (motor)msg->pitch.motor;
    std::cout << "Pitch Message Received. dir: " << dir << " motor: " << m
              << std::endl;

    uint8_t message[8];
    int can_id;

    if (m == LEFT) {
        david_pitch_ctrl_left_t left = {
            .command = (uint8_t)dir,
        };
        david_pitch_ctrl_left_pack(message, &left, sizeof(message));
        can_id = DAVID_PITCH_CTRL_LEFT_FRAME_ID;
    } else if (m == RIGHT) {
        david_pitch_ctrl_right_t right = {
            .command = (uint8_t)dir,
        };
        david_pitch_ctrl_right_pack(message, &right, sizeof(message));
        can_id = DAVID_PITCH_CTRL_RIGHT_FRAME_ID;
    } else {
        david_pitch_ctrl_both_t both = {
            .command = (uint8_t)dir,
        };
        david_pitch_ctrl_both_pack(message, &both, sizeof(message));
        can_id = DAVID_PITCH_CTRL_BOTH_FRAME_ID;
    }

    can.transmit(can_id, message);
}

int main(int argc, char **argv) {
    try {
        can = SocketCAN(CAN_BUS);

        ros::init(argc, argv, "pitch_ctrl_node");
        ros::NodeHandle nh;
        ros::Subscriber sub =
            nh.subscribe("pitch_control", 1024, pitchCallback);

        // Callback event loop
        ros::spin();
    } catch (std::string err) {
        std::cerr << err << std::endl;
        return 1;
    }
}
