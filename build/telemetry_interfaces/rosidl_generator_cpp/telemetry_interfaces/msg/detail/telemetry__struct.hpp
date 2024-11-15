// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from telemetry_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/telemetry.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__telemetry_interfaces__msg__Telemetry __attribute__((deprecated))
#else
# define DEPRECATED__telemetry_interfaces__msg__Telemetry __declspec(deprecated)
#endif

namespace telemetry_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetry_
{
  using Type = Telemetry_<ContainerAllocator>;

  explicit Telemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0l;
      this->gps_latitude = 0.0f;
      this->gps_longitude = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->heading = 0.0f;
    }
  }

  explicit Telemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0l;
      this->gps_latitude = 0.0f;
      this->gps_longitude = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _time_stamp_type =
    int32_t;
  _time_stamp_type time_stamp;
  using _gps_latitude_type =
    float;
  _gps_latitude_type gps_latitude;
  using _gps_longitude_type =
    float;
  _gps_longitude_type gps_longitude;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _heading_type =
    float;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const int32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__gps_latitude(
    const float & _arg)
  {
    this->gps_latitude = _arg;
    return *this;
  }
  Type & set__gps_longitude(
    const float & _arg)
  {
    this->gps_longitude = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    telemetry_interfaces::msg::Telemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const telemetry_interfaces::msg::Telemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      telemetry_interfaces::msg::Telemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      telemetry_interfaces::msg::Telemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__telemetry_interfaces__msg__Telemetry
    std::shared_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__telemetry_interfaces__msg__Telemetry
    std::shared_ptr<telemetry_interfaces::msg::Telemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetry_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->gps_latitude != other.gps_latitude) {
      return false;
    }
    if (this->gps_longitude != other.gps_longitude) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetry_

// alias to use template instance with default allocator
using Telemetry =
  telemetry_interfaces::msg::Telemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace telemetry_interfaces

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
