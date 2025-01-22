// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wheel_msgs/msg/detail/wheel_speeds__rosidl_typesupport_introspection_c.h"
#include "wheel_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wheel_msgs/msg/detail/wheel_speeds__functions.h"
#include "wheel_msgs/msg/detail/wheel_speeds__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wheel_msgs__msg__WheelSpeeds__init(message_memory);
}

void wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_fini_function(void * message_memory)
{
  wheel_msgs__msg__WheelSpeeds__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_member_array[2] = {
  {
    "right_wheel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheel_msgs__msg__WheelSpeeds, right_wheel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_wheel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheel_msgs__msg__WheelSpeeds, left_wheel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_members = {
  "wheel_msgs__msg",  // message namespace
  "WheelSpeeds",  // message name
  2,  // number of fields
  sizeof(wheel_msgs__msg__WheelSpeeds),
  wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_member_array,  // message members
  wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_type_support_handle = {
  0,
  &wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_members,
  get_message_typesupport_handle_function,
  &wheel_msgs__msg__WheelSpeeds__get_type_hash,
  &wheel_msgs__msg__WheelSpeeds__get_type_description,
  &wheel_msgs__msg__WheelSpeeds__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wheel_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wheel_msgs, msg, WheelSpeeds)() {
  if (!wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_type_support_handle.typesupport_identifier) {
    wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wheel_msgs__msg__WheelSpeeds__rosidl_typesupport_introspection_c__WheelSpeeds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
