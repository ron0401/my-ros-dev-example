#include "mypkg.h"

mypkg::mypkg() :
    magnetic_declination_(0.0)
{

}

mypkg::~mypkg()
{

}

void mypkg::run()
{
    ros::NodeHandle nh;
    ros::Subscriber sub_odom = nh.subscribe("/odom", 10, &mypkg::poseCallback,this);
    ros::Subscriber sub_navpvt = nh.subscribe("/gps/navpvt", 10, &mypkg::navpvtCallback,this);
    ros::spin();
}

void mypkg::poseCallback(const nav_msgs::Odometry& odom)
{
    ROS_INFO("x:%f",odom.pose.pose.position.x);
    ROS_INFO("y:%f",odom.pose.pose.position.y);
}

void mypkg::navpvtCallback(const ublox_msgs::NavPVT& nav)
{
    ROS_INFO("hAcc:%d",nav.hAcc);
}
