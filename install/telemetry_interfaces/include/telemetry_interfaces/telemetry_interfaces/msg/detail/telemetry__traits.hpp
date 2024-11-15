// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/telemetry.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "telemetry_interfaces/msg/detail/telemetry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace telemetry_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Telemetry & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: gps_latitude
  {
    out << "gps_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_latitude, out);
    out << ", ";
  }

  // member: gps_longitude
  {
    out << "gps_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_longitude, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Telemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: gps_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_latitude, out);
    out << "\n";
  }

  // member: gps_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_longitude, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Telemetry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace telemetry_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use telemetry_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const telemetry_interfaces::msg::Telemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  telemetry_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use telemetry_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const telemetry_interfaces::msg::Telemetry & msg)
{
  return telemetry_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<telemetry_interfaces::msg::Telemetry>()
{
  return "telemetry_interfaces::msg::Telemetry";
}

template<>
inline const char * name<telemetry_interfaces::msg::Telemetry>()
{
  return "telemetry_interfaces/msg/Telemetry";
}

template<>
struct has_fixed_size<telemetry_interfaces::msg::Telemetry>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<telemetry_interfaces::msg::Telemetry>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<telemetry_interfaces::msg::Telemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
