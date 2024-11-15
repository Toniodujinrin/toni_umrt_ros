// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from telemetry_interfaces:msg/Gps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/gps.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__GPS__BUILDER_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "telemetry_interfaces/msg/detail/gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace telemetry_interfaces
{

namespace msg
{

namespace builder
{

class Init_Gps_longitude
{
public:
  explicit Init_Gps_longitude(::telemetry_interfaces::msg::Gps & msg)
  : msg_(msg)
  {}
  ::telemetry_interfaces::msg::Gps longitude(::telemetry_interfaces::msg::Gps::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::telemetry_interfaces::msg::Gps msg_;
};

class Init_Gps_latitude
{
public:
  Init_Gps_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gps_longitude latitude(::telemetry_interfaces::msg::Gps::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Gps_longitude(msg_);
  }

private:
  ::telemetry_interfaces::msg::Gps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::telemetry_interfaces::msg::Gps>()
{
  return telemetry_interfaces::msg::builder::Init_Gps_latitude();
}

}  // namespace telemetry_interfaces

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__GPS__BUILDER_HPP_
