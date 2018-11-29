#include "ros/ros.h"
#include <std_msgs/String.h>
#include<sstream>
int main(int argc, char **argv)
{
  ros::init(argc, argv, "pub");
  ros::NodeHandle nh;
  ROS_INFO("Hello world!");
}
