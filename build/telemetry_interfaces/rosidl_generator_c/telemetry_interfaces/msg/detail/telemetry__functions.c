// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice
#include "telemetry_interfaces/msg/detail/telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
telemetry_interfaces__msg__Telemetry__init(telemetry_interfaces__msg__Telemetry * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  // gps_latitude
  // gps_longitude
  // roll
  // pitch
  // yaw
  // heading
  return true;
}

void
telemetry_interfaces__msg__Telemetry__fini(telemetry_interfaces__msg__Telemetry * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  // gps_latitude
  // gps_longitude
  // roll
  // pitch
  // yaw
  // heading
}

bool
telemetry_interfaces__msg__Telemetry__are_equal(const telemetry_interfaces__msg__Telemetry * lhs, const telemetry_interfaces__msg__Telemetry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // gps_latitude
  if (lhs->gps_latitude != rhs->gps_latitude) {
    return false;
  }
  // gps_longitude
  if (lhs->gps_longitude != rhs->gps_longitude) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  return true;
}

bool
telemetry_interfaces__msg__Telemetry__copy(
  const telemetry_interfaces__msg__Telemetry * input,
  telemetry_interfaces__msg__Telemetry * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // gps_latitude
  output->gps_latitude = input->gps_latitude;
  // gps_longitude
  output->gps_longitude = input->gps_longitude;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // heading
  output->heading = input->heading;
  return true;
}

telemetry_interfaces__msg__Telemetry *
telemetry_interfaces__msg__Telemetry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  telemetry_interfaces__msg__Telemetry * msg = (telemetry_interfaces__msg__Telemetry *)allocator.allocate(sizeof(telemetry_interfaces__msg__Telemetry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(telemetry_interfaces__msg__Telemetry));
  bool success = telemetry_interfaces__msg__Telemetry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
telemetry_interfaces__msg__Telemetry__destroy(telemetry_interfaces__msg__Telemetry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    telemetry_interfaces__msg__Telemetry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
telemetry_interfaces__msg__Telemetry__Sequence__init(telemetry_interfaces__msg__Telemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  telemetry_interfaces__msg__Telemetry * data = NULL;

  if (size) {
    data = (telemetry_interfaces__msg__Telemetry *)allocator.zero_allocate(size, sizeof(telemetry_interfaces__msg__Telemetry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = telemetry_interfaces__msg__Telemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        telemetry_interfaces__msg__Telemetry__fini(&data[i - 1]);
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
telemetry_interfaces__msg__Telemetry__Sequence__fini(telemetry_interfaces__msg__Telemetry__Sequence * array)
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
      telemetry_interfaces__msg__Telemetry__fini(&array->data[i]);
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

telemetry_interfaces__msg__Telemetry__Sequence *
telemetry_interfaces__msg__Telemetry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  telemetry_interfaces__msg__Telemetry__Sequence * array = (telemetry_interfaces__msg__Telemetry__Sequence *)allocator.allocate(sizeof(telemetry_interfaces__msg__Telemetry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = telemetry_interfaces__msg__Telemetry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
telemetry_interfaces__msg__Telemetry__Sequence__destroy(telemetry_interfaces__msg__Telemetry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    telemetry_interfaces__msg__Telemetry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
telemetry_interfaces__msg__Telemetry__Sequence__are_equal(const telemetry_interfaces__msg__Telemetry__Sequence * lhs, const telemetry_interfaces__msg__Telemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!telemetry_interfaces__msg__Telemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
telemetry_interfaces__msg__Telemetry__Sequence__copy(
  const telemetry_interfaces__msg__Telemetry__Sequence * input,
  telemetry_interfaces__msg__Telemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(telemetry_interfaces__msg__Telemetry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    telemetry_interfaces__msg__Telemetry * data =
      (telemetry_interfaces__msg__Telemetry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!telemetry_interfaces__msg__Telemetry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          telemetry_interfaces__msg__Telemetry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!telemetry_interfaces__msg__Telemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
