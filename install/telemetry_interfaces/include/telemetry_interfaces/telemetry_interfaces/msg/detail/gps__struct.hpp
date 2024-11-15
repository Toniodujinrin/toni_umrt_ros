// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from telemetry_interfaces:msg/Gps.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "telemetry_interfaces/msg/gps.hpp"


#ifndef TELEMETRY_INTERFACES__MSG__DETAIL__GPS__STRUCT_HPP_
#define TELEMETRY_INTERFACES__MSG__DETAIL__GPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__telemetry_interfaces__msg__Gps __attribute__((deprecated))
#else
# define DEPRECATED__telemetry_interfaces__msg__Gps __declspec(deprecated)
#endif

namespace telemetry_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gps_
{
  using Type = Gps_<ContainerAllocator>;

  explicit Gps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0f;
      this->longitude = 0.0f;
    }
  }

  explicit Gps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0f;
      this->longitude = 0.0f;
    }
  }

  // field types and members
  using _latitude_type =
    float;
  _latitude_type latitude;
  using _longitude_type =
    float;
  _longitude_type longitude;

  // setters for named parameter idiom
  Type & set__latitude(
    const float & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const float & _arg)
  {
    this->longitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    telemetry_interfaces::msg::Gps_<ContainerAllocator> *;
  using ConstRawPtr =
    const telemetry_interfaces::msg::Gps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      telemetry_interfaces::msg::Gps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      telemetry_interfaces::msg::Gps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__telemetry_interfaces__msg__Gps
    std::shared_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__telemetry_interfaces__msg__Gps
    std::shared_ptr<telemetry_interfaces::msg::Gps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gps_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gps_

// alias to use template instance with default allocator
using Gps =
  telemetry_interfaces::msg::Gps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace telemetry_interfaces

#endif  // TELEMETRY_INTERFACES__MSG__DETAIL__GPS__STRUCT_HPP_
