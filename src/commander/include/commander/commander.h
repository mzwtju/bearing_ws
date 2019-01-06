#ifndef _COMMANDER_H_
#define _COMMANDER_H_

#include <geometry_msgs/TwistStamped.h>
#include <keyboard/Key.h>
#include <stdio.h>
#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float32.h>
#include <std_msgs/UInt8.h>
#include <math.h>
#include <bearing_common/HParamSetSrv.h>

namespace smarteye{

class commander
{
public:
    commander(int argc,char** argv,const char * name);
    ~commander();

private:
    boost::shared_ptr<ros::NodeHandle> nh;
    void update(const ros::TimerEvent& event);
    ros::Timer  commanderUpdateTimer;
    ros::ServiceClient param_to_formation;
<<<<<<< HEAD
    ros::ServiceClient param_to_formation2;
    ros::ServiceClient param_to_formation3;
    float hei_ki;
    float hei_kp1;
    float hei_kp2;
    float hei_kpdiv;
=======
    float hei_ki;
    float hei_kp;
>>>>>>> 70c8a32f592250a9fe6be9b4e3ab95881aae7efc
    float hei_kd;
    float hei_bias;
    float xy_ki;
    float xy_kp;
    float xy_kd;
    float xy_bias;
    float env_k_alpha;
    float env_k_beta;
<<<<<<< HEAD
    float env_k_gamma;
=======
>>>>>>> 70c8a32f592250a9fe6be9b4e3ab95881aae7efc
    float rotTheta;
    void initParam(void);
};



}

#endif


