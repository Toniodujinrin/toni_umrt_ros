// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/telemetry.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "telemetry_interfaces/msg/detail/telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace telemetry_interfaces
{

namespace msg
{

namespace builder
{

class Init_Telemetry_heading
{
public:
  explicit Init_Telemetry_heading(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  ::telemetry_interfaces::msg::Telemetry heading(::telemetry_interfaces::msg::Telemetry::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_yaw
{
public:
  explicit Init_Telemetry_yaw(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_heading yaw(::telemetry_interfaces::msg::Telemetry::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Telemetry_heading(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_pitch
{
public:
  explicit Init_Telemetry_pitch(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_yaw pitch(::telemetry_interfaces::msg::Telemetry::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Telemetry_yaw(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_roll
{
public:
  explicit Init_Telemetry_roll(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_pitch roll(::telemetry_interfaces::msg::Telemetry::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Telemetry_pitch(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_gps_longitude
{
public:
  explicit Init_Telemetry_gps_longitude(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_roll gps_longitude(::telemetry_interfaces::msg::Telemetry::_gps_longitude_type arg)
  {
    msg_.gps_longitude = std::move(arg);
    return Init_Telemetry_roll(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_gps_latitude
{
public:
  explicit Init_Telemetry_gps_latitude(::telemetry_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_gps_longitude gps_latitude(::telemetry_interfaces::msg::Telemetry::_gps_latitude_type arg)
  {
    msg_.gps_latitude = std::move(arg);
    return Init_Telemetry_gps_longitude(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_time_stamp
{
public:
  Init_Telemetry_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Telemetry_gps_latitude time_stamp(::telemetry_interfaces::msg::Telemetry::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_Telemetry_gps_latitude(msg_);
  }

private:
  ::telemetry_interfaces::msg::Telemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::telemetry_interfaces::msg::Telemetry>()
{
  return telemetry_interfaces::msg::builder::Init_Telemetry_time_stamp();
}

}  // namespace telemetry_interfaces

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
