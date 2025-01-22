// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#ifndef WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_
#define WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheel_msgs/msg/detail/wheel_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheel_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSpeeds_left_wheel
{
public:
  explicit Init_WheelSpeeds_left_wheel(::wheel_msgs::msg::WheelSpeeds & msg)
  : msg_(msg)
  {}
  ::wheel_msgs::msg::WheelSpeeds left_wheel(::wheel_msgs::msg::WheelSpeeds::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheel_msgs::msg::WheelSpeeds msg_;
};

class Init_WheelSpeeds_right_wheel
{
public:
  Init_WheelSpeeds_right_wheel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeeds_left_wheel right_wheel(::wheel_msgs::msg::WheelSpeeds::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return Init_WheelSpeeds_left_wheel(msg_);
  }

private:
  ::wheel_msgs::msg::WheelSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheel_msgs::msg::WheelSpeeds>()
{
  return wheel_msgs::msg::builder::Init_WheelSpeeds_right_wheel();
}

}  // namespace wheel_msgs

#endif  // WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_
