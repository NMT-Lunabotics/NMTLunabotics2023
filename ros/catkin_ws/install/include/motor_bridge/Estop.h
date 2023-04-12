// Generated by gencpp from file motor_bridge/Estop.msg
// DO NOT EDIT!


#ifndef MOTOR_BRIDGE_MESSAGE_ESTOP_H
#define MOTOR_BRIDGE_MESSAGE_ESTOP_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_bridge
{
template <class ContainerAllocator>
struct Estop_
{
  typedef Estop_<ContainerAllocator> Type;

  Estop_()
    : stop(false)  {
    }
  Estop_(const ContainerAllocator& _alloc)
    : stop(false)  {
  (void)_alloc;
    }



   typedef uint8_t _stop_type;
  _stop_type stop;





  typedef boost::shared_ptr< ::motor_bridge::Estop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_bridge::Estop_<ContainerAllocator> const> ConstPtr;

}; // struct Estop_

typedef ::motor_bridge::Estop_<std::allocator<void> > Estop;

typedef boost::shared_ptr< ::motor_bridge::Estop > EstopPtr;
typedef boost::shared_ptr< ::motor_bridge::Estop const> EstopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_bridge::Estop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_bridge::Estop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motor_bridge::Estop_<ContainerAllocator1> & lhs, const ::motor_bridge::Estop_<ContainerAllocator2> & rhs)
{
  return lhs.stop == rhs.stop;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motor_bridge::Estop_<ContainerAllocator1> & lhs, const ::motor_bridge::Estop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motor_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Estop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Estop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Estop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Estop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Estop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Estop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_bridge::Estop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71f1172402e56b82716ca71681cded6b";
  }

  static const char* value(const ::motor_bridge::Estop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71f1172402e56b82ULL;
  static const uint64_t static_value2 = 0x716ca71681cded6bULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_bridge::Estop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_bridge/Estop";
  }

  static const char* value(const ::motor_bridge::Estop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_bridge::Estop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Emergency stop message\n"
"\n"
"# Emergency stop (0 = false, 1 = true)\n"
"bool stop\n"
;
  }

  static const char* value(const ::motor_bridge::Estop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_bridge::Estop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Estop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_bridge::Estop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_bridge::Estop_<ContainerAllocator>& v)
  {
    s << indent << "stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_BRIDGE_MESSAGE_ESTOP_H