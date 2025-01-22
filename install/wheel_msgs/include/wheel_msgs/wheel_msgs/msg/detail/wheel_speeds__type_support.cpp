// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wheel_msgs/msg/detail/wheel_speeds__functions.h"
#include "wheel_msgs/msg/detail/wheel_speeds__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wheel_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelSpeeds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wheel_msgs::msg::WheelSpeeds(_init);
}

void WheelSpeeds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wheel_msgs::msg::WheelSpeeds *>(message_memory);
  typed_message->~WheelSpeeds();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelSpeeds_message_member_array[2] = {
  {
    "right_wheel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheel_msgs::msg::WheelSpeeds, right_wheel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_wheel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wheel_msgs::msg::WheelSpeeds, left_wheel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelSpeeds_message_members = {
  "wheel_msgs::msg",  // message namespace
  "WheelSpeeds",  // message name
  2,  // number of fields
  sizeof(wheel_msgs::msg::WheelSpeeds),
  WheelSpeeds_message_member_array,  // message members
  WheelSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelSpeeds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelSpeeds_message_members,
  get_message_typesupport_handle_function,
  &wheel_msgs__msg__WheelSpeeds__get_type_hash,
  &wheel_msgs__msg__WheelSpeeds__get_type_description,
  &wheel_msgs__msg__WheelSpeeds__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wheel_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wheel_msgs::msg::WheelSpeeds>()
{
  return &::wheel_msgs::msg::rosidl_typesupport_introspection_cpp::WheelSpeeds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wheel_msgs, msg, WheelSpeeds)() {
  return &::wheel_msgs::msg::rosidl_typesupport_introspection_cpp::WheelSpeeds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
