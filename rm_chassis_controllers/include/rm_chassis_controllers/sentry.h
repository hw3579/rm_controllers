//
// Created by flying on 2021/1/18.
//

#ifndef RM_CHASSIS_CONTROLLER_SENTRY_H
#define RM_CHASSIS_CONTROLLER_SENTRY_H

#include "rm_chassis_controllers/chassis_base.h"

namespace rm_chassis_controllers {

class SentryController : public ChassisBase {
 public:
  SentryController() = default;
  bool init(hardware_interface::RobotHW *robot_hw, ros::NodeHandle &root_nh, ros::NodeHandle &controller_nh) override;

 private:
  void moveJoint(const ros::Time &time, const ros::Duration &period) override;
  geometry_msgs::Twist forwardKinematics() override;

  effort_controllers::JointVelocityController ctrl_wheel_;
};

}
#endif //RM_CHASSIS_CONTROLLER_STANDARD_H