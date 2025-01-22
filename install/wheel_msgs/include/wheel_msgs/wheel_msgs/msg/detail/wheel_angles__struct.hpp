// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheel_msgs:msg/WheelAngles.idl
// generated code does not contain a copyright notice

#ifndef WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_
#define WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheel_msgs__msg__WheelAngles __attribute__((deprecated))
#else
# define DEPRECATED__wheel_msgs__msg__WheelAngles __declspec(deprecated)
#endif

namespace wheel_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelAngles_
{
  using Type = WheelAngles_<ContainerAllocator>;

  explicit WheelAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel = 0.0f;
      this->left_wheel = 0.0f;
    }
  }

  explicit WheelAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel = 0.0f;
      this->left_wheel = 0.0f;
    }
  }

  // field types and members
  using _right_wheel_type =
    float;
  _right_wheel_type right_wheel;
  using _left_wheel_type =
    float;
  _left_wheel_type left_wheel;

  // setters for named parameter idiom
  Type & set__right_wheel(
    const float & _arg)
  {
    this->right_wheel = _arg;
    return *this;
  }
  Type & set__left_wheel(
    const float & _arg)
  {
    this->left_wheel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheel_msgs::msg::WheelAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheel_msgs::msg::WheelAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheel_msgs::msg::WheelAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheel_msgs::msg::WheelAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheel_msgs__msg__WheelAngles
    std::shared_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheel_msgs__msg__WheelAngles
    std::shared_ptr<wheel_msgs::msg::WheelAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelAngles_ & other) const
  {
    if (this->right_wheel != other.right_wheel) {
      return false;
    }
    if (this->left_wheel != other.left_wheel) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelAngles_

// alias to use template instance with default allocator
using WheelAngles =
  wheel_msgs::msg::WheelAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wheel_msgs

#endif  // WHEEL_MSGS__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_
