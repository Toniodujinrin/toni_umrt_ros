// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from telemetry_interfaces:msg/Gps.idl
// generated code does not contain a copyright notice

#include "telemetry_interfaces/msg/detail/gps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_telemetry_interfaces
const rosidl_type_hash_t *
telemetry_interfaces__msg__Gps__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0x5d, 0xc9, 0xf8, 0x1d, 0x4c, 0xd5, 0xfb,
      0xc2, 0x09, 0xba, 0x03, 0xc6, 0x57, 0x65, 0x66,
      0x07, 0xae, 0x7b, 0x47, 0x25, 0x80, 0xd1, 0x32,
      0xfc, 0xe8, 0x71, 0x78, 0xca, 0x63, 0xc8, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char telemetry_interfaces__msg__Gps__TYPE_NAME[] = "telemetry_interfaces/msg/Gps";

// Define type names, field names, and default values
static char telemetry_interfaces__msg__Gps__FIELD_NAME__latitude[] = "latitude";
static char telemetry_interfaces__msg__Gps__FIELD_NAME__longitude[] = "longitude";

static rosidl_runtime_c__type_description__Field telemetry_interfaces__msg__Gps__FIELDS[] = {
  {
    {telemetry_interfaces__msg__Gps__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {telemetry_interfaces__msg__Gps__FIELD_NAME__longitude, 9, 9},
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
telemetry_interfaces__msg__Gps__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {telemetry_interfaces__msg__Gps__TYPE_NAME, 28, 28},
      {telemetry_interfaces__msg__Gps__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 latitude \n"
  "float32 longitude";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
telemetry_interfaces__msg__Gps__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {telemetry_interfaces__msg__Gps__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
telemetry_interfaces__msg__Gps__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *telemetry_interfaces__msg__Gps__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
