// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#include "wheel_msgs/msg/detail/wheel_speeds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_type_hash_t *
wheel_msgs__msg__WheelSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x9d, 0x24, 0x48, 0x47, 0xa1, 0xa0, 0xcf,
      0x53, 0x23, 0x86, 0x7c, 0xda, 0x31, 0xf0, 0x33,
      0xfb, 0x25, 0x96, 0x56, 0x6e, 0x46, 0xe7, 0xcd,
      0x5d, 0xf4, 0x84, 0xc2, 0xe6, 0x01, 0xd4, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char wheel_msgs__msg__WheelSpeeds__TYPE_NAME[] = "wheel_msgs/msg/WheelSpeeds";

// Define type names, field names, and default values
static char wheel_msgs__msg__WheelSpeeds__FIELD_NAME__right_wheel[] = "right_wheel";
static char wheel_msgs__msg__WheelSpeeds__FIELD_NAME__left_wheel[] = "left_wheel";

static rosidl_runtime_c__type_description__Field wheel_msgs__msg__WheelSpeeds__FIELDS[] = {
  {
    {wheel_msgs__msg__WheelSpeeds__FIELD_NAME__right_wheel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wheel_msgs__msg__WheelSpeeds__FIELD_NAME__left_wheel, 10, 10},
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
wheel_msgs__msg__WheelSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {wheel_msgs__msg__WheelSpeeds__TYPE_NAME, 26, 26},
      {wheel_msgs__msg__WheelSpeeds__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 right_wheel\n"
  "float32 left_wheel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
wheel_msgs__msg__WheelSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {wheel_msgs__msg__WheelSpeeds__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
wheel_msgs__msg__WheelSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *wheel_msgs__msg__WheelSpeeds__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
