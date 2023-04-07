// Generated by gencpp from file motor_bridge/Drive.msg
// DO NOT EDIT!


#ifndef MOTOR_BRIDGE_MESSAGE_DRIVE_H
#define MOTOR_BRIDGE_MESSAGE_DRIVE_H


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
struct Drive_
{
  typedef Drive_<ContainerAllocator> Type;

  Drive_()
    : speed(0)
    , motor(0)  {
    }
  Drive_(const ContainerAllocator& _alloc)
    : speed(0)
    , motor(0)  {
  (void)_alloc;
    }



   typedef int32_t _speed_type;
  _speed_type speed;

   typedef int32_t _motor_type;
  _motor_type motor;





  typedef boost::shared_ptr< ::motor_bridge::Drive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_bridge::Drive_<ContainerAllocator> const> ConstPtr;

}; // struct Drive_

typedef ::motor_bridge::Drive_<std::allocator<void> > Drive;

typedef boost::shared_ptr< ::motor_bridge::Drive > DrivePtr;
typedef boost::shared_ptr< ::motor_bridge::Drive const> DriveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_bridge::Drive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_bridge::Drive_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motor_bridge::Drive_<ContainerAllocator1> & lhs, const ::motor_bridge::Drive_<ContainerAllocator2> & rhs)
{
  return lhs.speed == rhs.speed &&
    lhs.motor == rhs.motor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motor_bridge::Drive_<ContainerAllocator1> & lhs, const ::motor_bridge::Drive_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motor_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Drive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Drive_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_bridge::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14b3be7c56f8564b45133d0af1560d8f";
  }

  static const char* value(const ::motor_bridge::Drive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14b3be7c56f8564bULL;
  static const uint64_t static_value2 = 0x45133d0af1560d8fULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_bridge::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_bridge/Drive";
  }

  static const char* value(const ::motor_bridge::Drive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_bridge::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Drive Control Message\n"
"\n"
"# Speed Control (Full Backward = -1024, Stop = 0, Full Forward = 1024)\n"
"int32 speed\n"
"\n"
"# Which motor (0 = both, 1 = left, 2 = right)\n"
"int32 motor\n"
"\n"
;
  }

  static const char* value(const ::motor_bridge::Drive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_bridge::Drive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed);
      stream.next(m.motor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Drive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_bridge::Drive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_bridge::Drive_<ContainerAllocator>& v)
  {
    s << indent << "speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed);
    s << indent << "motor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.motor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_BRIDGE_MESSAGE_DRIVE_H
