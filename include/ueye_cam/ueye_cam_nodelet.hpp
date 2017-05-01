#ifndef UEYE_CAM_NODELET_HPP_
#define UEYE_CAM_NODELET_HPP_

#include <ros/ros.h>
#include <nodelet/nodelet.h>

#include "ueye_cam/ueye_cam_ros.hpp"

namespace ueye_cam
{

class UEyeCamNodelet : public nodelet::Nodelet
{
public:

    UEyeCamNodelet();
    virtual ~UEyeCamNodelet();
    virtual void onInit();

private:

    UEyeCamROS _driver;

};

}

#endif