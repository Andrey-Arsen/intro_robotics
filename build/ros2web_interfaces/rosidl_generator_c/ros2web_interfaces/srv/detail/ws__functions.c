// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2web_interfaces:srv/WS.idl
// generated code does not contain a copyright notice
#include "ros2web_interfaces/srv/detail/ws__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `srv_name`
// Member `route`
// Member `ws_id`
// Member `extra`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "ros2web_interfaces/msg/detail/ws_msg_data__functions.h"

bool
ros2web_interfaces__srv__WS_Request__init(ros2web_interfaces__srv__WS_Request * msg)
{
  if (!msg) {
    return false;
  }
  // srv_name
  if (!rosidl_runtime_c__String__init(&msg->srv_name)) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
    return false;
  }
  // route
  if (!rosidl_runtime_c__String__init(&msg->route)) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
    return false;
  }
  // type
  // ws_id
  if (!rosidl_runtime_c__String__init(&msg->ws_id)) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__init(&msg->data)) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__init(&msg->extra)) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2web_interfaces__srv__WS_Request__fini(ros2web_interfaces__srv__WS_Request * msg)
{
  if (!msg) {
    return;
  }
  // srv_name
  rosidl_runtime_c__String__fini(&msg->srv_name);
  // route
  rosidl_runtime_c__String__fini(&msg->route);
  // type
  // ws_id
  rosidl_runtime_c__String__fini(&msg->ws_id);
  // data
  ros2web_interfaces__msg__WSMsgData__fini(&msg->data);
  // extra
  rosidl_runtime_c__String__fini(&msg->extra);
}

bool
ros2web_interfaces__srv__WS_Request__are_equal(const ros2web_interfaces__srv__WS_Request * lhs, const ros2web_interfaces__srv__WS_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // srv_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->srv_name), &(rhs->srv_name)))
  {
    return false;
  }
  // route
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // ws_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ws_id), &(rhs->ws_id)))
  {
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->extra), &(rhs->extra)))
  {
    return false;
  }
  return true;
}

bool
ros2web_interfaces__srv__WS_Request__copy(
  const ros2web_interfaces__srv__WS_Request * input,
  ros2web_interfaces__srv__WS_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // srv_name
  if (!rosidl_runtime_c__String__copy(
      &(input->srv_name), &(output->srv_name)))
  {
    return false;
  }
  // route
  if (!rosidl_runtime_c__String__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // ws_id
  if (!rosidl_runtime_c__String__copy(
      &(input->ws_id), &(output->ws_id)))
  {
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__copy(
      &(input->extra), &(output->extra)))
  {
    return false;
  }
  return true;
}

ros2web_interfaces__srv__WS_Request *
ros2web_interfaces__srv__WS_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Request * msg = (ros2web_interfaces__srv__WS_Request *)allocator.allocate(sizeof(ros2web_interfaces__srv__WS_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2web_interfaces__srv__WS_Request));
  bool success = ros2web_interfaces__srv__WS_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2web_interfaces__srv__WS_Request__destroy(ros2web_interfaces__srv__WS_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2web_interfaces__srv__WS_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2web_interfaces__srv__WS_Request__Sequence__init(ros2web_interfaces__srv__WS_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Request * data = NULL;

  if (size) {
    data = (ros2web_interfaces__srv__WS_Request *)allocator.zero_allocate(size, sizeof(ros2web_interfaces__srv__WS_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2web_interfaces__srv__WS_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2web_interfaces__srv__WS_Request__fini(&data[i - 1]);
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
ros2web_interfaces__srv__WS_Request__Sequence__fini(ros2web_interfaces__srv__WS_Request__Sequence * array)
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
      ros2web_interfaces__srv__WS_Request__fini(&array->data[i]);
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

ros2web_interfaces__srv__WS_Request__Sequence *
ros2web_interfaces__srv__WS_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Request__Sequence * array = (ros2web_interfaces__srv__WS_Request__Sequence *)allocator.allocate(sizeof(ros2web_interfaces__srv__WS_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2web_interfaces__srv__WS_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2web_interfaces__srv__WS_Request__Sequence__destroy(ros2web_interfaces__srv__WS_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2web_interfaces__srv__WS_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2web_interfaces__srv__WS_Request__Sequence__are_equal(const ros2web_interfaces__srv__WS_Request__Sequence * lhs, const ros2web_interfaces__srv__WS_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2web_interfaces__srv__WS_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2web_interfaces__srv__WS_Request__Sequence__copy(
  const ros2web_interfaces__srv__WS_Request__Sequence * input,
  ros2web_interfaces__srv__WS_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2web_interfaces__srv__WS_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2web_interfaces__srv__WS_Request * data =
      (ros2web_interfaces__srv__WS_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2web_interfaces__srv__WS_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2web_interfaces__srv__WS_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2web_interfaces__srv__WS_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ws_id`
// Member `extra`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `data`
// already included above
// #include "ros2web_interfaces/msg/detail/ws_msg_data__functions.h"

bool
ros2web_interfaces__srv__WS_Response__init(ros2web_interfaces__srv__WS_Response * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // ws_id
  if (!rosidl_runtime_c__String__init(&msg->ws_id)) {
    ros2web_interfaces__srv__WS_Response__fini(msg);
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__init(&msg->data)) {
    ros2web_interfaces__srv__WS_Response__fini(msg);
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__init(&msg->extra)) {
    ros2web_interfaces__srv__WS_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2web_interfaces__srv__WS_Response__fini(ros2web_interfaces__srv__WS_Response * msg)
{
  if (!msg) {
    return;
  }
  // type
  // ws_id
  rosidl_runtime_c__String__fini(&msg->ws_id);
  // data
  ros2web_interfaces__msg__WSMsgData__fini(&msg->data);
  // extra
  rosidl_runtime_c__String__fini(&msg->extra);
}

bool
ros2web_interfaces__srv__WS_Response__are_equal(const ros2web_interfaces__srv__WS_Response * lhs, const ros2web_interfaces__srv__WS_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // ws_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ws_id), &(rhs->ws_id)))
  {
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->extra), &(rhs->extra)))
  {
    return false;
  }
  return true;
}

bool
ros2web_interfaces__srv__WS_Response__copy(
  const ros2web_interfaces__srv__WS_Response * input,
  ros2web_interfaces__srv__WS_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // ws_id
  if (!rosidl_runtime_c__String__copy(
      &(input->ws_id), &(output->ws_id)))
  {
    return false;
  }
  // data
  if (!ros2web_interfaces__msg__WSMsgData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__copy(
      &(input->extra), &(output->extra)))
  {
    return false;
  }
  return true;
}

ros2web_interfaces__srv__WS_Response *
ros2web_interfaces__srv__WS_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Response * msg = (ros2web_interfaces__srv__WS_Response *)allocator.allocate(sizeof(ros2web_interfaces__srv__WS_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2web_interfaces__srv__WS_Response));
  bool success = ros2web_interfaces__srv__WS_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2web_interfaces__srv__WS_Response__destroy(ros2web_interfaces__srv__WS_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2web_interfaces__srv__WS_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2web_interfaces__srv__WS_Response__Sequence__init(ros2web_interfaces__srv__WS_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Response * data = NULL;

  if (size) {
    data = (ros2web_interfaces__srv__WS_Response *)allocator.zero_allocate(size, sizeof(ros2web_interfaces__srv__WS_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2web_interfaces__srv__WS_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2web_interfaces__srv__WS_Response__fini(&data[i - 1]);
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
ros2web_interfaces__srv__WS_Response__Sequence__fini(ros2web_interfaces__srv__WS_Response__Sequence * array)
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
      ros2web_interfaces__srv__WS_Response__fini(&array->data[i]);
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

ros2web_interfaces__srv__WS_Response__Sequence *
ros2web_interfaces__srv__WS_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2web_interfaces__srv__WS_Response__Sequence * array = (ros2web_interfaces__srv__WS_Response__Sequence *)allocator.allocate(sizeof(ros2web_interfaces__srv__WS_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2web_interfaces__srv__WS_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2web_interfaces__srv__WS_Response__Sequence__destroy(ros2web_interfaces__srv__WS_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2web_interfaces__srv__WS_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2web_interfaces__srv__WS_Response__Sequence__are_equal(const ros2web_interfaces__srv__WS_Response__Sequence * lhs, const ros2web_interfaces__srv__WS_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2web_interfaces__srv__WS_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2web_interfaces__srv__WS_Response__Sequence__copy(
  const ros2web_interfaces__srv__WS_Response__Sequence * input,
  ros2web_interfaces__srv__WS_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2web_interfaces__srv__WS_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2web_interfaces__srv__WS_Response * data =
      (ros2web_interfaces__srv__WS_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2web_interfaces__srv__WS_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2web_interfaces__srv__WS_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2web_interfaces__srv__WS_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
