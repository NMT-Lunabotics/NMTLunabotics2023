// Generated by gencpp from file se2_navigation_msgs/PathMsg.msg
// DO NOT EDIT!


#ifndef SE2_NAVIGATION_MSGS_MESSAGE_PATHMSG_H
#define SE2_NAVIGATION_MSGS_MESSAGE_PATHMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <se2_navigation_msgs/PathSegmentMsg.h>

namespace se2_navigation_msgs
{
template <class ContainerAllocator>
struct PathMsg_
{
  typedef PathMsg_<ContainerAllocator> Type;

  PathMsg_()
    : header()
    , segment()  {
    }
  PathMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , segment(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >> _segment_type;
  _segment_type segment;





  typedef boost::shared_ptr< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> const> ConstPtr;

}; // struct PathMsg_

typedef ::se2_navigation_msgs::PathMsg_<std::allocator<void> > PathMsg;

typedef boost::shared_ptr< ::se2_navigation_msgs::PathMsg > PathMsgPtr;
typedef boost::shared_ptr< ::se2_navigation_msgs::PathMsg const> PathMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::se2_navigation_msgs::PathMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::se2_navigation_msgs::PathMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::PathMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.segment == rhs.segment;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::se2_navigation_msgs::PathMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::PathMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace se2_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "903b0d0b2bfe4cbcdeb7a06291ea8df4";
  }

  static const char* value(const ::se2_navigation_msgs::PathMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x903b0d0b2bfe4cbcULL;
  static const uint64_t static_value2 = 0xdeb7a06291ea8df4ULL;
};

template<class ContainerAllocator>
struct DataType< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "se2_navigation_msgs/PathMsg";
  }

  static const char* value(const ::se2_navigation_msgs::PathMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"std_msgs/Header header\n"
"se2_navigation_msgs/PathSegmentMsg[] segment\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: se2_navigation_msgs/PathSegmentMsg\n"
"\n"
"\n"
"int8 FORWARD = 0\n"
"int8 BACKWARDS = 1\n"
"\n"
"int8 drivingDirection\n"
"\n"
"\n"
"geometry_msgs/Pose[] points\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::se2_navigation_msgs::PathMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.segment);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::se2_navigation_msgs::PathMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::se2_navigation_msgs::PathMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "segment[]" << std::endl;
    for (size_t i = 0; i < v.segment.size(); ++i)
    {
      s << indent << "  segment[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.segment[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SE2_NAVIGATION_MSGS_MESSAGE_PATHMSG_H
