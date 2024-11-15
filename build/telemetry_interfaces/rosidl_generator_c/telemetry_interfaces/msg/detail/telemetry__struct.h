// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/telemetry.h"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_
#define TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Telemetry in the package telemetry_interfaces.
typedef struct telemetry_interfaces__msg__Telemetry
{
  int32_t time_stamp;
  float gps_latitude;
  float gps_longitude;
  float roll;
  float pitch;
  float yaw;
  float heading;
} telemetry_interfaces__msg__Telemetry;

// Struct for a sequence of telemetry_interfaces__msg__Telemetry.
typedef struct telemetry_interfaces__msg__Telemetry__Sequence
{
  telemetry_interfaces__msg__Telemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} telemetry_interfaces__msg__Telemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_
