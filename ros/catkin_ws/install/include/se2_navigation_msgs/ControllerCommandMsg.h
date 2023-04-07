// Generated by gencpp from file se2_navigation_msgs/ControllerCommandMsg.msg
// DO NOT EDIT!


#ifndef SE2_NAVIGATION_MSGS_MESSAGE_CONTROLLERCOMMANDMSG_H
#define SE2_NAVIGATION_MSGS_MESSAGE_CONTROLLERCOMMANDMSG_H


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
struct ControllerCommandMsg_
{
  typedef ControllerCommandMsg_<ContainerAllocator> Type;

  ControllerCommandMsg_()
    : command(0)  {
    }
  ControllerCommandMsg_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef int8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(START_TRACKING)
  #undef START_TRACKING
#endif
#if defined(_WIN32) && defined(STOP_TRACKING)
  #undef STOP_TRACKING
#endif

  enum {
    START_TRACKING = 0,
    STOP_TRACKING = 1,
  };


  typedef boost::shared_ptr< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerCommandMsg_

typedef ::se2_navigation_msgs::ControllerCommandMsg_<std::allocator<void> > ControllerCommandMsg;

typedef boost::shared_ptr< ::se2_navigation_msgs::ControllerCommandMsg > ControllerCommandMsgPtr;
typedef boost::shared_ptr< ::se2_navigation_msgs::ControllerCommandMsg const> ControllerCommandMsgConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator1> & lhs, const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace se2_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f666cfd8f3589400e119791c2d52c7ee";
  }

  static const char* value(const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf666cfd8f3589400ULL;
  static const uint64_t static_value2 = 0xe119791c2d52c7eeULL;
};

template<class ContainerAllocator>
struct DataType< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "se2_navigation_msgs/ControllerCommandMsg";
  }

  static const char* value(const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int8 START_TRACKING=0\n"
"int8 STOP_TRACKING=1\n"
"\n"
"int8 command\n"
;
  }

  static const char* value(const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerCommandMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::se2_navigation_msgs::ControllerCommandMsg_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<int8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SE2_NAVIGATION_MSGS_MESSAGE_CONTROLLERCOMMANDMSG_H
