// Generated by gencpp from file se2_navigation_msgs/RequestPathSrv.msg
// DO NOT EDIT!


#ifndef SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRV_H
#define SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRV_H

#include <ros/service_traits.h>


#include <se2_navigation_msgs/RequestPathSrvRequest.h>
#include <se2_navigation_msgs/RequestPathSrvResponse.h>


namespace se2_navigation_msgs
{

struct RequestPathSrv
{

typedef RequestPathSrvRequest Request;
typedef RequestPathSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RequestPathSrv
} // namespace se2_navigation_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::se2_navigation_msgs::RequestPathSrv > {
  static const char* value()
  {
    return "5539d8cfd1e0b02f407ce0465be5beeb";
  }

  static const char* value(const ::se2_navigation_msgs::RequestPathSrv&) { return value(); }
};

template<>
struct DataType< ::se2_navigation_msgs::RequestPathSrv > {
  static const char* value()
  {
    return "se2_navigation_msgs/RequestPathSrv";
  }

  static const char* value(const ::se2_navigation_msgs::RequestPathSrv&) { return value(); }
};


// service_traits::MD5Sum< ::se2_navigation_msgs::RequestPathSrvRequest> should match
// service_traits::MD5Sum< ::se2_navigation_msgs::RequestPathSrv >
template<>
struct MD5Sum< ::se2_navigation_msgs::RequestPathSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::se2_navigation_msgs::RequestPathSrv >::value();
  }
  static const char* value(const ::se2_navigation_msgs::RequestPathSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::se2_navigation_msgs::RequestPathSrvRequest> should match
// service_traits::DataType< ::se2_navigation_msgs::RequestPathSrv >
template<>
struct DataType< ::se2_navigation_msgs::RequestPathSrvRequest>
{
  static const char* value()
  {
    return DataType< ::se2_navigation_msgs::RequestPathSrv >::value();
  }
  static const char* value(const ::se2_navigation_msgs::RequestPathSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::se2_navigation_msgs::RequestPathSrvResponse> should match
// service_traits::MD5Sum< ::se2_navigation_msgs::RequestPathSrv >
template<>
struct MD5Sum< ::se2_navigation_msgs::RequestPathSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::se2_navigation_msgs::RequestPathSrv >::value();
  }
  static const char* value(const ::se2_navigation_msgs::RequestPathSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::se2_navigation_msgs::RequestPathSrvResponse> should match
// service_traits::DataType< ::se2_navigation_msgs::RequestPathSrv >
template<>
struct DataType< ::se2_navigation_msgs::RequestPathSrvResponse>
{
  static const char* value()
  {
    return DataType< ::se2_navigation_msgs::RequestPathSrv >::value();
  }
  static const char* value(const ::se2_navigation_msgs::RequestPathSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRV_H
