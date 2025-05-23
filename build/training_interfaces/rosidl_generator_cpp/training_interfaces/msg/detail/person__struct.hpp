// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from training_interfaces:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__MSG__DETAIL__PERSON__STRUCT_HPP_
#define TRAINING_INTERFACES__MSG__DETAIL__PERSON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__training_interfaces__msg__Person __attribute__((deprecated))
#else
# define DEPRECATED__training_interfaces__msg__Person __declspec(deprecated)
#endif

namespace training_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Person_
{
  using Type = Person_<ContainerAllocator>;

  explicit Person_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
    }
  }

  explicit Person_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _age_type =
    int32_t;
  _age_type age;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    training_interfaces::msg::Person_<ContainerAllocator> *;
  using ConstRawPtr =
    const training_interfaces::msg::Person_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<training_interfaces::msg::Person_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<training_interfaces::msg::Person_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      training_interfaces::msg::Person_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::msg::Person_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      training_interfaces::msg::Person_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::msg::Person_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<training_interfaces::msg::Person_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<training_interfaces::msg::Person_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__training_interfaces__msg__Person
    std::shared_ptr<training_interfaces::msg::Person_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__training_interfaces__msg__Person
    std::shared_ptr<training_interfaces::msg::Person_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Person_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    return true;
  }
  bool operator!=(const Person_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Person_

// alias to use template instance with default allocator
using Person =
  training_interfaces::msg::Person_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace training_interfaces

#endif  // TRAINING_INTERFACES__MSG__DETAIL__PERSON__STRUCT_HPP_
