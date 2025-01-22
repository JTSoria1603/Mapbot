// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wheel_msgs:msg/WheelAngles.idl
// generated code does not contain a copyright notice

#ifndef WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_
#define WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wheel_msgs/msg/detail/wheel_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wheel_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_wheel
  {
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
    out << ", ";
  }

  // member: left_wheel
  {
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel, out);
    out << "\n";
  }

  // member: left_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelAngles & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wheel_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wheel_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wheel_msgs::msg::WheelAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  wheel_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wheel_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wheel_msgs::msg::WheelAngles & msg)
{
  return wheel_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wheel_msgs::msg::WheelAngles>()
{
  return "wheel_msgs::msg::WheelAngles";
}

template<>
inline const char * name<wheel_msgs::msg::WheelAngles>()
{
  return "wheel_msgs/msg/WheelAngles";
}

template<>
struct has_fixed_size<wheel_msgs::msg::WheelAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wheel_msgs::msg::WheelAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wheel_msgs::msg::WheelAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_
