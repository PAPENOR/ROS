#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "pub");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
