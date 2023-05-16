#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <sensor_msgs/JointState.h>

ros::Publisher pose_pub;
ros::Publisher joint_pub;

void Callback(const nav_msgs::Odometry::ConstPtr& msg)
{
    geometry_msgs::PoseWithCovarianceStamped pose_msg;
    pose_msg.header = msg->header;
    pose_msg.pose= msg->pose;
    pose_pub.publish(pose_msg);
    
    sensor_msgs::JointState joint_msg;
    joint_msg.header = msg->header;
    joint_msg.name = std::vector<std::string>{"d455_2", "t265"};
    joint_pub.publish(joint_msg);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "pose_pub");
    ros::NodeHandle nh;

    ros::Subscriber odom_sub = nh.subscribe("/camera/odom/sample", 10, Callback);
    pose_pub = nh.advertise<geometry_msgs::PoseWithCovarianceStamped>("/pose_with_covariance", 10);
    joint_pub = nh.advertise<sensor_msgs::JointState>("/joint_state", 10);
    ros::spin();

    return 0;
}

