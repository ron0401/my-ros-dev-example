#ifndef ROBOT_LOCALIZATION_NAVSAT_TRANSFORM_H
#define ROBOT_LOCALIZATION_NAVSAT_TRANSFORM_H

#include "ros/ros.h"
#include <string>
#include "std_msgs/String.h"
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Odometry.h"
#include "ublox_msgs/NavPVT.h"

class mypkg
{
  private:
      /* data */
      double magnetic_declination_;
      
  public:
    mypkg();
    ~mypkg();
    void run();
    void poseCallback(const nav_msgs::Odometry& odom);
    void navpvtCallback(const ublox_msgs::NavPVT& nav);
};


#endif