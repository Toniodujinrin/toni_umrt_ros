// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from telemetry_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice
#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TELEMETRY_INTERFACES__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "telemetry_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "telemetry_interfaces/msg/detail/imu__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
bool cdr_serialize_telemetry_interfaces__msg__Imu(
  const telemetry_interfaces__msg__Imu * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
bool cdr_deserialize_telemetry_interfaces__msg__Imu(
  eprosima::fastcdr::Cdr &,
  telemetry_interfaces__msg__Imu * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
size_t get_serialized_size_telemetry_interfaces__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
size_t max_serialized_size_telemetry_interfaces__msg__Imu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
bool cdr_serialize_key_telemetry_interfaces__msg__Imu(
  const telemetry_interfaces__msg__Imu * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
size_t get_serialized_size_key_telemetry_interfaces__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
size_t max_serialized_size_key_telemetry_interfaces__msg__Imu(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_telemetry_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, telemetry_interfaces, msg, Imu)();

#ifdef __cplusplus
}
#endif

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__IMU__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
