#include <ros/ros.h>
#include "ueye_cam/ueye_cam_ros.hpp"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "ueye_cam_node");

    ros::NodeHandle nh, ph("~");
    ueye_cam::UEyeCamROS cam;
    cam.init(nh, ph);
    ros::spin();

}