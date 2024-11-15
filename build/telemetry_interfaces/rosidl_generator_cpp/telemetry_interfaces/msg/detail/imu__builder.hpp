// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from telemetry_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/imu.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "telemetry_interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace telemetry_interfaces
{

namespace msg
{

namespace builder
{

class Init_Imu_heading
{
public:
  explicit Init_Imu_heading(::telemetry_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  ::telemetry_interfaces::msg::Imu heading(::telemetry_interfaces::msg::Imu::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::telemetry_interfaces::msg::Imu msg_;
};

class Init_Imu_yaw
{
public:
  explicit Init_Imu_yaw(::telemetry_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_heading yaw(::telemetry_interfaces::msg::Imu::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Imu_heading(msg_);
  }

private:
  ::telemetry_interfaces::msg::Imu msg_;
};

class Init_Imu_pitch
{
public:
  explicit Init_Imu_pitch(::telemetry_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_yaw pitch(::telemetry_interfaces::msg::Imu::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Imu_yaw(msg_);
  }

private:
  ::telemetry_interfaces::msg::Imu msg_;
};

class Init_Imu_roll
{
public:
  Init_Imu_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_pitch roll(::telemetry_interfaces::msg::Imu::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Imu_pitch(msg_);
  }

private:
  ::telemetry_interfaces::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::telemetry_interfaces::msg::Imu>()
{
  return telemetry_interfaces::msg::builder::Init_Imu_roll();
}

}  // namespace telemetry_interfaces

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
