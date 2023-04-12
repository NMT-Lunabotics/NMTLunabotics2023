// Generated by gencpp from file se2_navigation_msgs/PathSegmentMsg.msg
// DO NOT EDIT!


#ifndef SE2_NAVIGATION_MSGS_MESSAGE_PATHSEGMENTMSG_H
#define SE2_NAVIGATION_MSGS_MESSAGE_PATHSEGMENTMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace se2_navigation_msgs
{
template <class ContainerAllocator>
struct PathSegmentMsg_
{
  typedef PathSegmentMsg_<ContainerAllocator> Type;

  PathSegmentMsg_()
    : drivingDirection(0)
    , points()  {
    }
  PathSegmentMsg_(const ContainerAllocator& _alloc)
    : drivingDirection(0)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _drivingDirection_type;
  _drivingDirection_type drivingDirection;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _points_type;
  _points_type points;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FORWARD)
  #undef FORWARD
#endif
#if defined(_WIN32) && defined(BACKWARDS)
  #undef BACKWARDS
#endif

  enum {
    FORWARD = 0,
    BACKWARDS = 1,
  };


  typedef boost::shared_ptr< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> const> ConstPtr;

}; // struct PathSegmentMsg_

typedef ::se2_navigation_msgs::PathSegmentMsg_<std::allocator<void> > PathSegmentMsg;

typedef boost::shared_ptr< ::se2_navigation_msgs::PathSegmentMsg > PathSegmentMsgPtr;
typedef boost::shared_ptr< ::se2_navigation_msgs::PathSegmentMsg const> PathSegmentMsgConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator2> & rhs)
{
  return lhs.drivingDirection == rhs.drivingDirection &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace se2_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8da26ed105802ea1199162a6750daa5e";
  }

  static const char* value(const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8da26ed105802ea1ULL;
  static const uint64_t static_value2 = 0x199162a6750daa5eULL;
};

template<class ContainerAllocator>
struct DataType< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "se2_navigation_msgs/PathSegmentMsg";
  }

  static const char* value(const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
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

  static const char* value(const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.drivingDirection);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathSegmentMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::se2_navigation_msgs::PathSegmentMsg_<ContainerAllocator>& v)
  {
    s << indent << "drivingDirection: ";
    Printer<int8_t>::stream(s, indent + "  ", v.drivingDirection);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SE2_NAVIGATION_MSGS_MESSAGE_PATHSEGMENTMSG_H