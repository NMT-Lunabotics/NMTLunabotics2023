#include <iostream>
#include <motor_bridge/System.h>
#include <ros/ros.h>
#include "joystick/gamepad.hpp"

int main(int argc, char *argv[]) {
    ros::init(argc, argv, "pad_send");
    ros::NodeHandle nh;
    int max = 1024;
    int min = -max;
    int dead = 200;
    ros::Publisher pub = nh.advertise<motor_bridge::System>("/system", 5);
    GamepadHandler g("/dev/input/js0", max, dead);
    motor_bridge::System s;
    bool going = true;
    bool estopped = false;
    int count = 0;
    while (going) {
        g.update();
        if (count < 100)
            count++;

        std::cout << g << std::endl;

        // Drive left stick
        int left = g.left_stick.x + g.left_stick.y;
        int right = g.left_stick.y - g.left_stick.x;
        left = (left > max) ? max : left;
        left = (left < min) ? min : left;
        right = (right > max) ? max : right;
        right = (right < min) ? min : right;
        s.left.rpm = left;
        s.right.rpm = right;

        // Pitch dpad up/down
        s.pitch.direction = g.dpad.up ? 1 : 0;
        s.pitch.direction = g.dpad.down ? 2 : s.pitch.direction;
        s.pitch.motor = 0;

        // Extend bumpers
        s.extend.direction = g.buttons.left_bumper ? 2 : 0;
        s.extend.direction = g.buttons.right_bumper ? 1 : s.extend.direction;
        s.extend.rpm = (s.extend.direction != 0) ? max : 0;
        s.extend.motor = 0;

        // Digger triggers
        s.digger.rpm = g.right_trigger;
        s.digger.rpm = (g.left_trigger > 0) ? -g.left_trigger : s.digger.rpm;

        // Estop
        if (g.buttons.A)
            estopped = true;
        if (g.buttons.B)
            estopped = false;
        s.estop = estopped;

        if (g.buttons.xbox && count > 50) {
            s.estop = true;
            going = false;
        }

        pub.publish(s);
    }
    return 0;
}