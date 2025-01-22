// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheel_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice
#include "wheel_msgs/msg/detail/wheel_speeds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wheel_msgs__msg__WheelSpeeds__init(wheel_msgs__msg__WheelSpeeds * msg)
{
  if (!msg) {
    return false;
  }
  // right_wheel
  // left_wheel
  return true;
}

void
wheel_msgs__msg__WheelSpeeds__fini(wheel_msgs__msg__WheelSpeeds * msg)
{
  if (!msg) {
    return;
  }
  // right_wheel
  // left_wheel
}

bool
wheel_msgs__msg__WheelSpeeds__are_equal(const wheel_msgs__msg__WheelSpeeds * lhs, const wheel_msgs__msg__WheelSpeeds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  return true;
}

bool
wheel_msgs__msg__WheelSpeeds__copy(
  const wheel_msgs__msg__WheelSpeeds * input,
  wheel_msgs__msg__WheelSpeeds * output)
{
  if (!input || !output) {
    return false;
  }
  // right_wheel
  output->right_wheel = input->right_wheel;
  // left_wheel
  output->left_wheel = input->left_wheel;
  return true;
}

wheel_msgs__msg__WheelSpeeds *
wheel_msgs__msg__WheelSpeeds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheel_msgs__msg__WheelSpeeds * msg = (wheel_msgs__msg__WheelSpeeds *)allocator.allocate(sizeof(wheel_msgs__msg__WheelSpeeds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheel_msgs__msg__WheelSpeeds));
  bool success = wheel_msgs__msg__WheelSpeeds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheel_msgs__msg__WheelSpeeds__destroy(wheel_msgs__msg__WheelSpeeds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheel_msgs__msg__WheelSpeeds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheel_msgs__msg__WheelSpeeds__Sequence__init(wheel_msgs__msg__WheelSpeeds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheel_msgs__msg__WheelSpeeds * data = NULL;

  if (size) {
    data = (wheel_msgs__msg__WheelSpeeds *)allocator.zero_allocate(size, sizeof(wheel_msgs__msg__WheelSpeeds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheel_msgs__msg__WheelSpeeds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheel_msgs__msg__WheelSpeeds__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wheel_msgs__msg__WheelSpeeds__Sequence__fini(wheel_msgs__msg__WheelSpeeds__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wheel_msgs__msg__WheelSpeeds__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wheel_msgs__msg__WheelSpeeds__Sequence *
wheel_msgs__msg__WheelSpeeds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheel_msgs__msg__WheelSpeeds__Sequence * array = (wheel_msgs__msg__WheelSpeeds__Sequence *)allocator.allocate(sizeof(wheel_msgs__msg__WheelSpeeds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheel_msgs__msg__WheelSpeeds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheel_msgs__msg__WheelSpeeds__Sequence__destroy(wheel_msgs__msg__WheelSpeeds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheel_msgs__msg__WheelSpeeds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheel_msgs__msg__WheelSpeeds__Sequence__are_equal(const wheel_msgs__msg__WheelSpeeds__Sequence * lhs, const wheel_msgs__msg__WheelSpeeds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheel_msgs__msg__WheelSpeeds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheel_msgs__msg__WheelSpeeds__Sequence__copy(
  const wheel_msgs__msg__WheelSpeeds__Sequence * input,
  wheel_msgs__msg__WheelSpeeds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheel_msgs__msg__WheelSpeeds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheel_msgs__msg__WheelSpeeds * data =
      (wheel_msgs__msg__WheelSpeeds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheel_msgs__msg__WheelSpeeds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheel_msgs__msg__WheelSpeeds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheel_msgs__msg__WheelSpeeds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
