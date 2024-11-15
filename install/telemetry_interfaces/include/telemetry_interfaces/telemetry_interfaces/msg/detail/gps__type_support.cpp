// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from telemetry_interfaces:msg/Gps.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "telemetry_interfaces/msg/detail/gps__functions.h"
#include "telemetry_interfaces/msg/detail/gps__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace telemetry_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Gps_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) telemetry_interfaces::msg::Gps(_init);
}

void Gps_fini_function(void * message_memory)
{
  auto typed_message = static_cast<telemetry_interfaces::msg::Gps *>(message_memory);
  typed_message->~Gps();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Gps_message_member_array[2] = {
  {
    "latitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces::msg::Gps, latitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "longitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces::msg::Gps, longitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Gps_message_members = {
  "telemetry_interfaces::msg",  // message namespace
  "Gps",  // message name
  2,  // number of fields
  sizeof(telemetry_interfaces::msg::Gps),
  false,  // has_any_key_member_
  Gps_message_member_array,  // message members
  Gps_init_function,  // function to initialize message memory (memory has to be allocated)
  Gps_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Gps_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Gps_message_members,
  get_message_typesupport_handle_function,
  &telemetry_interfaces__msg__Gps__get_type_hash,
  &telemetry_interfaces__msg__Gps__get_type_description,
  &telemetry_interfaces__msg__Gps__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace telemetry_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<telemetry_interfaces::msg::Gps>()
{
  return &::telemetry_interfaces::msg::rosidl_typesupport_introspection_cpp::Gps_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, telemetry_interfaces, msg, Gps)() {
  return &::telemetry_interfaces::msg::rosidl_typesupport_introspection_cpp::Gps_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
