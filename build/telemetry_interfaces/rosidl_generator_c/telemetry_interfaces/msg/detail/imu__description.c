// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from telemetry_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#include "telemetry_interfaces/msg/detail/imu__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_telemetry_interfaces
const rosidl_type_hash_t *
telemetry_interfaces__msg__Imu__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x3e, 0xda, 0x5d, 0xa2, 0x92, 0x3c, 0xef,
      0x58, 0x67, 0x10, 0xba, 0x38, 0xf6, 0xf5, 0x8d,
      0x44, 0x54, 0xeb, 0x47, 0x38, 0xb6, 0xb2, 0xda,
      0xdb, 0x96, 0x9f, 0x06, 0x40, 0x4f, 0xd5, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char telemetry_interfaces__msg__Imu__TYPE_NAME[] = "telemetry_interfaces/msg/Imu";

// Define type names, field names, and default values
static char telemetry_interfaces__msg__Imu__FIELD_NAME__roll[] = "roll";
static char telemetry_interfaces__msg__Imu__FIELD_NAME__pitch[] = "pitch";
static char telemetry_interfaces__msg__Imu__FIELD_NAME__yaw[] = "yaw";
static char telemetry_interfaces__msg__Imu__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field telemetry_interfaces__msg__Imu__FIELDS[] = {
  {
    {telemetry_interfaces__msg__Imu__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Imu__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Imu__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Imu__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
telemetry_interfaces__msg__Imu__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {telemetry_interfaces__msg__Imu__TYPE_NAME, 28, 28},
      {telemetry_interfaces__msg__Imu__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 roll\n"
  "float32 pitch \n"
  "float32 yaw \n"
  "float32 heading";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
telemetry_interfaces__msg__Imu__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {telemetry_interfaces__msg__Imu__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 57, 57},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
telemetry_interfaces__msg__Imu__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *telemetry_interfaces__msg__Imu__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
