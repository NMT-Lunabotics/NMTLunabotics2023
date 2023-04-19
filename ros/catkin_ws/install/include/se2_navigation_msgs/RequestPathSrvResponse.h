// Generated by gencpp from file se2_navigation_msgs/RequestPathSrvResponse.msg
// DO NOT EDIT!


#ifndef SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRVRESPONSE_H
#define SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRVRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace se2_navigation_msgs
{
template <class ContainerAllocator>
struct RequestPathSrvResponse_
{
  typedef RequestPathSrvResponse_<ContainerAllocator> Type;

  RequestPathSrvResponse_()
    : status(false)  {
    }
  RequestPathSrvResponse_(const ContainerAllocator& _alloc)
    : status(false)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequestPathSrvResponse_

typedef ::se2_navigation_msgs::RequestPathSrvResponse_<std::allocator<void> > RequestPathSrvResponse;

typedef boost::shared_ptr< ::se2_navigation_msgs::RequestPathSrvResponse > RequestPathSrvResponsePtr;
typedef boost::shared_ptr< ::se2_navigation_msgs::RequestPathSrvResponse const> RequestPathSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace se2_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a1255d4d998bd4d6585c64639b5ee9a";
  }

  static const char* value(const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a1255d4d998bd4dULL;
  static const uint64_t static_value2 = 0x6585c64639b5ee9aULL;
};

template<class ContainerAllocator>
struct DataType< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "se2_navigation_msgs/RequestPathSrvResponse";
  }

  static const char* value(const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Response\n"
"bool status\n"
;
  }

  static const char* value(const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestPathSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::se2_navigation_msgs::RequestPathSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SE2_NAVIGATION_MSGS_MESSAGE_REQUESTPATHSRVRESPONSE_H