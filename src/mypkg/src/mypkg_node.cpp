#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "../include/mypkg.h"




int main(int argc, char **argv)
{
  ros::init(argc, argv, "mypkg");
  mypkg node;
  node.run();
  

  return 0;
}