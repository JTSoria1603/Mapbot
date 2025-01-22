// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#ifndef WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__FUNCTIONS_H_
#define WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "wheel_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wheel_msgs/msg/detail/wheel_speeds__struct.h"

/// Initialize msg/WheelSpeeds message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wheel_msgs__msg__WheelSpeeds
 * )) before or use
 * wheel_msgs__msg__WheelSpeeds__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__init(wheel_msgs__msg__WheelSpeeds * msg);

/// Finalize msg/WheelSpeeds message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
void
wheel_msgs__msg__WheelSpeeds__fini(wheel_msgs__msg__WheelSpeeds * msg);

/// Create msg/WheelSpeeds message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wheel_msgs__msg__WheelSpeeds__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
wheel_msgs__msg__WheelSpeeds *
wheel_msgs__msg__WheelSpeeds__create();

/// Destroy msg/WheelSpeeds message.
/**
 * It calls
 * wheel_msgs__msg__WheelSpeeds__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
void
wheel_msgs__msg__WheelSpeeds__destroy(wheel_msgs__msg__WheelSpeeds * msg);

/// Check for msg/WheelSpeeds message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__are_equal(const wheel_msgs__msg__WheelSpeeds * lhs, const wheel_msgs__msg__WheelSpeeds * rhs);

/// Copy a msg/WheelSpeeds message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__copy(
  const wheel_msgs__msg__WheelSpeeds * input,
  wheel_msgs__msg__WheelSpeeds * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_type_hash_t *
wheel_msgs__msg__WheelSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_runtime_c__type_description__TypeDescription *
wheel_msgs__msg__WheelSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_runtime_c__type_description__TypeSource *
wheel_msgs__msg__WheelSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
wheel_msgs__msg__WheelSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/WheelSpeeds messages.
/**
 * It allocates the memory for the number of elements and calls
 * wheel_msgs__msg__WheelSpeeds__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__Sequence__init(wheel_msgs__msg__WheelSpeeds__Sequence * array, size_t size);

/// Finalize array of msg/WheelSpeeds messages.
/**
 * It calls
 * wheel_msgs__msg__WheelSpeeds__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
void
wheel_msgs__msg__WheelSpeeds__Sequence__fini(wheel_msgs__msg__WheelSpeeds__Sequence * array);

/// Create array of msg/WheelSpeeds messages.
/**
 * It allocates the memory for the array and calls
 * wheel_msgs__msg__WheelSpeeds__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
wheel_msgs__msg__WheelSpeeds__Sequence *
wheel_msgs__msg__WheelSpeeds__Sequence__create(size_t size);

/// Destroy array of msg/WheelSpeeds messages.
/**
 * It calls
 * wheel_msgs__msg__WheelSpeeds__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
void
wheel_msgs__msg__WheelSpeeds__Sequence__destroy(wheel_msgs__msg__WheelSpeeds__Sequence * array);

/// Check for msg/WheelSpeeds message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__Sequence__are_equal(const wheel_msgs__msg__WheelSpeeds__Sequence * lhs, const wheel_msgs__msg__WheelSpeeds__Sequence * rhs);

/// Copy an array of msg/WheelSpeeds messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wheel_msgs
bool
wheel_msgs__msg__WheelSpeeds__Sequence__copy(
  const wheel_msgs__msg__WheelSpeeds__Sequence * input,
  wheel_msgs__msg__WheelSpeeds__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WHEEL_MSGS__MSG__DETAIL__WHEEL_SPEEDS__FUNCTIONS_H_
