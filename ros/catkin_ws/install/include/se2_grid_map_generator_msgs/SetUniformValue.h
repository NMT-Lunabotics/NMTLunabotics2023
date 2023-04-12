// Generated by gencpp from file se2_grid_map_generator_msgs/SetUniformValue.msg
// DO NOT EDIT!


#ifndef SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUE_H
#define SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUE_H

#include <ros/service_traits.h>


#include <se2_grid_map_generator_msgs/SetUniformValueRequest.h>
#include <se2_grid_map_generator_msgs/SetUniformValueResponse.h>


namespace se2_grid_map_generator_msgs
{

struct SetUniformValue
{

typedef SetUniformValueRequest Request;
typedef SetUniformValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetUniformValue
} // namespace se2_grid_map_generator_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValue > {
  static const char* value()
  {
    return "e0f18e88964ccbda0238df7be68a4fd8";
  }

  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValue&) { return value(); }
};

template<>
struct DataType< ::se2_grid_map_generator_msgs::SetUniformValue > {
  static const char* value()
  {
    return "se2_grid_map_generator_msgs/SetUniformValue";
  }

  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValue&) { return value(); }
};


// service_traits::MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValueRequest> should match
// service_traits::MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValue >
template<>
struct MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValue >::value();
  }
  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::se2_grid_map_generator_msgs::SetUniformValueRequest> should match
// service_traits::DataType< ::se2_grid_map_generator_msgs::SetUniformValue >
template<>
struct DataType< ::se2_grid_map_generator_msgs::SetUniformValueRequest>
{
  static const char* value()
  {
    return DataType< ::se2_grid_map_generator_msgs::SetUniformValue >::value();
  }
  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValueResponse> should match
// service_traits::MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValue >
template<>
struct MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValue >::value();
  }
  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::se2_grid_map_generator_msgs::SetUniformValueResponse> should match
// service_traits::DataType< ::se2_grid_map_generator_msgs::SetUniformValue >
template<>
struct DataType< ::se2_grid_map_generator_msgs::SetUniformValueResponse>
{
  static const char* value()
  {
    return DataType< ::se2_grid_map_generator_msgs::SetUniformValue >::value();
  }
  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUE_H