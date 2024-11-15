// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from telemetry_interfaces:msg/Gps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/gps.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__GPS__TRAITS_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__GPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "telemetry_interfaces/msg/detail/gps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace telemetry_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gps & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gps & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gps & msg, bool use_flow_style = false)
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
  const telemetry_interfaces::msg::Gps & msg,
  std::ostream & out, size_t indentation = 0)
{
  telemetry_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use telemetry_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const telemetry_interfaces::msg::Gps & msg)
{
  return telemetry_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<telemetry_interfaces::msg::Gps>()
{
  return "telemetry_interfaces::msg::Gps";
}

template<>
inline const char * name<telemetry_interfaces::msg::Gps>()
{
  return "telemetry_interfaces/msg/Gps";
}

template<>
struct has_fixed_size<telemetry_interfaces::msg::Gps>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<telemetry_interfaces::msg::Gps>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<telemetry_interfaces::msg::Gps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__GPS__TRAITS_HPP_
