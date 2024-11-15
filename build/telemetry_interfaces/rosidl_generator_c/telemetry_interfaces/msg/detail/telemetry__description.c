// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

#include "telemetry_interfaces/msg/detail/telemetry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_telemetry_interfaces
const rosidl_type_hash_t *
telemetry_interfaces__msg__Telemetry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x96, 0xee, 0xda, 0xdd, 0x47, 0x47, 0x18,
      0x52, 0xb6, 0x55, 0xfa, 0x2e, 0x03, 0xb3, 0xf1,
      0x59, 0x12, 0xd7, 0x9a, 0x97, 0xa4, 0xc6, 0x8c,
      0xe5, 0xe8, 0xfc, 0x75, 0xa1, 0x5f, 0x94, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char telemetry_interfaces__msg__Telemetry__TYPE_NAME[] = "telemetry_interfaces/msg/Telemetry";

// Define type names, field names, and default values
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__time_stamp[] = "time_stamp";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__gps_latitude[] = "gps_latitude";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__gps_longitude[] = "gps_longitude";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__roll[] = "roll";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__pitch[] = "pitch";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__yaw[] = "yaw";
static char telemetry_interfaces__msg__Telemetry__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field telemetry_interfaces__msg__Telemetry__FIELDS[] = {
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__time_stamp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__gps_latitude, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__gps_longitude, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Telemetry__FIELD_NAME__heading, 7, 7},
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
telemetry_interfaces__msg__Telemetry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {telemetry_interfaces__msg__Telemetry__TYPE_NAME, 34, 34},
      {telemetry_interfaces__msg__Telemetry__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 time_stamp\n"
  "float32 gps_latitude \n"
  "float32 gps_longitude \n"
  "float32 roll \n"
  "float32 pitch \n"
  "float32 yaw \n"
  "float32 heading \n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
telemetry_interfaces__msg__Telemetry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {telemetry_interfaces__msg__Telemetry__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 123, 123},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
telemetry_interfaces__msg__Telemetry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *telemetry_interfaces__msg__Telemetry__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
