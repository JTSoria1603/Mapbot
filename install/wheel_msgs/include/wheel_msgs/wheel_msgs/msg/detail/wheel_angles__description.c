// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from wheel_msgs:msg/WheelAngles.idl
// generated code does not contain a copyright notice

#include "wheel_msgs/msg/detail/wheel_angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_type_hash_t *
wheel_msgs__msg__WheelAngles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x07, 0xb8, 0xb0, 0x36, 0x0b, 0x74, 0xd2,
      0x46, 0xb8, 0xdb, 0xd6, 0x04, 0x25, 0xe4, 0x43,
      0xbc, 0x11, 0x90, 0x45, 0xd1, 0x73, 0xef, 0x97,
      0x5e, 0x7b, 0x73, 0x8a, 0x66, 0x24, 0x74, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char wheel_msgs__msg__WheelAngles__TYPE_NAME[] = "wheel_msgs/msg/WheelAngles";

// Define type names, field names, and default values
static char wheel_msgs__msg__WheelAngles__FIELD_NAME__right_wheel[] = "right_wheel";
static char wheel_msgs__msg__WheelAngles__FIELD_NAME__left_wheel[] = "left_wheel";

static rosidl_runtime_c__type_description__Field wheel_msgs__msg__WheelAngles__FIELDS[] = {
  {
    {wheel_msgs__msg__WheelAngles__FIELD_NAME__right_wheel, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {wheel_msgs__msg__WheelAngles__FIELD_NAME__left_wheel, 10, 10},
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
wheel_msgs__msg__WheelAngles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {wheel_msgs__msg__WheelAngles__TYPE_NAME, 26, 26},
      {wheel_msgs__msg__WheelAngles__FIELDS, 2, 2},
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
wheel_msgs__msg__WheelAngles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {wheel_msgs__msg__WheelAngles__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
wheel_msgs__msg__WheelAngles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *wheel_msgs__msg__WheelAngles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
