// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from telemetry_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "telemetry_interfaces/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "telemetry_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "telemetry_interfaces/msg/detail/imu__functions.h"
#include "telemetry_interfaces/msg/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  telemetry_interfaces__msg__Imu__init(message_memory);
}

void telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function(void * message_memory)
{
  telemetry_interfaces__msg__Imu__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[4] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces__msg__Imu, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces__msg__Imu, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces__msg__Imu, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(telemetry_interfaces__msg__Imu, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members = {
  "telemetry_interfaces__msg",  // message namespace
  "Imu",  // message name
  4,  // number of fields
  sizeof(telemetry_interfaces__msg__Imu),
  false,  // has_any_key_member_
  telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array,  // message members
  telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle = {
  0,
  &telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members,
  get_message_typesupport_handle_function,
  &telemetry_interfaces__msg__Imu__get_type_hash,
  &telemetry_interfaces__msg__Imu__get_type_description,
  &telemetry_interfaces__msg__Imu__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_telemetry_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, telemetry_interfaces, msg, Imu)() {
  if (!telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier) {
    telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &telemetry_interfaces__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
