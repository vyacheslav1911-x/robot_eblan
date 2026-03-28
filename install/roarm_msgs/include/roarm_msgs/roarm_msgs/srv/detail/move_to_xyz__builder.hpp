// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roarm_msgs:srv/MoveToXYZ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roarm_msgs/srv/move_to_xyz.hpp"


#ifndef ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__BUILDER_HPP_
#define ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roarm_msgs/srv/detail/move_to_xyz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roarm_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveToXYZ_Request_z
{
public:
  explicit Init_MoveToXYZ_Request_z(::roarm_msgs::srv::MoveToXYZ_Request & msg)
  : msg_(msg)
  {}
  ::roarm_msgs::srv::MoveToXYZ_Request z(::roarm_msgs::srv::MoveToXYZ_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Request msg_;
};

class Init_MoveToXYZ_Request_y
{
public:
  explicit Init_MoveToXYZ_Request_y(::roarm_msgs::srv::MoveToXYZ_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToXYZ_Request_z y(::roarm_msgs::srv::MoveToXYZ_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveToXYZ_Request_z(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Request msg_;
};

class Init_MoveToXYZ_Request_x
{
public:
  Init_MoveToXYZ_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToXYZ_Request_y x(::roarm_msgs::srv::MoveToXYZ_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveToXYZ_Request_y(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roarm_msgs::srv::MoveToXYZ_Request>()
{
  return roarm_msgs::srv::builder::Init_MoveToXYZ_Request_x();
}

}  // namespace roarm_msgs


namespace roarm_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveToXYZ_Response_message
{
public:
  explicit Init_MoveToXYZ_Response_message(::roarm_msgs::srv::MoveToXYZ_Response & msg)
  : msg_(msg)
  {}
  ::roarm_msgs::srv::MoveToXYZ_Response message(::roarm_msgs::srv::MoveToXYZ_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Response msg_;
};

class Init_MoveToXYZ_Response_success
{
public:
  Init_MoveToXYZ_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToXYZ_Response_message success(::roarm_msgs::srv::MoveToXYZ_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToXYZ_Response_message(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roarm_msgs::srv::MoveToXYZ_Response>()
{
  return roarm_msgs::srv::builder::Init_MoveToXYZ_Response_success();
}

}  // namespace roarm_msgs


namespace roarm_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveToXYZ_Event_response
{
public:
  explicit Init_MoveToXYZ_Event_response(::roarm_msgs::srv::MoveToXYZ_Event & msg)
  : msg_(msg)
  {}
  ::roarm_msgs::srv::MoveToXYZ_Event response(::roarm_msgs::srv::MoveToXYZ_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Event msg_;
};

class Init_MoveToXYZ_Event_request
{
public:
  explicit Init_MoveToXYZ_Event_request(::roarm_msgs::srv::MoveToXYZ_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToXYZ_Event_response request(::roarm_msgs::srv::MoveToXYZ_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToXYZ_Event_response(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Event msg_;
};

class Init_MoveToXYZ_Event_info
{
public:
  Init_MoveToXYZ_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToXYZ_Event_request info(::roarm_msgs::srv::MoveToXYZ_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToXYZ_Event_request(msg_);
  }

private:
  ::roarm_msgs::srv::MoveToXYZ_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roarm_msgs::srv::MoveToXYZ_Event>()
{
  return roarm_msgs::srv::builder::Init_MoveToXYZ_Event_info();
}

}  // namespace roarm_msgs

#endif  // ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__BUILDER_HPP_
