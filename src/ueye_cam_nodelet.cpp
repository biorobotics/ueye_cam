#include "ueye_cam/ueye_cam_nodelet.hpp"

namespace ueye_cam
{


UEyeCamNodelet::UEyeCamNodelet():
    nodelet::Nodelet()
{}

UEyeCamNodelet::~UEyeCamNodelet()
{}

void UEyeCamNodelet::onInit()
{
    ros::NodeHandle& nh = getNodeHandle();
    ros::NodeHandle& local_nh = getPrivateNodeHandle();
    _driver.init(nh, local_nh);
}

}

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(ueye_cam::UEyeCamNodelet, nodelet::Nodelet)