// Generated by gencpp from file motor_bridge/Pitch.msg
// DO NOT EDIT!


#ifndef MOTOR_BRIDGE_MESSAGE_PITCH_H
#define MOTOR_BRIDGE_MESSAGE_PITCH_H


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
struct Pitch_
{
  typedef Pitch_<ContainerAllocator> Type;

  Pitch_()
    : direction(0)
    , motor(0)  {
    }
  Pitch_(const ContainerAllocator& _alloc)
    : direction(0)
    , motor(0)  {
  (void)_alloc;
    }



   typedef int32_t _direction_type;
  _direction_type direction;

   typedef int32_t _motor_type;
  _motor_type motor;





  typedef boost::shared_ptr< ::motor_bridge::Pitch_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_bridge::Pitch_<ContainerAllocator> const> ConstPtr;

}; // struct Pitch_

typedef ::motor_bridge::Pitch_<std::allocator<void> > Pitch;

typedef boost::shared_ptr< ::motor_bridge::Pitch > PitchPtr;
typedef boost::shared_ptr< ::motor_bridge::Pitch const> PitchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_bridge::Pitch_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_bridge::Pitch_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motor_bridge::Pitch_<ContainerAllocator1> & lhs, const ::motor_bridge::Pitch_<ContainerAllocator2> & rhs)
{
  return lhs.direction == rhs.direction &&
    lhs.motor == rhs.motor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motor_bridge::Pitch_<ContainerAllocator1> & lhs, const ::motor_bridge::Pitch_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motor_bridge

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Pitch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_bridge::Pitch_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Pitch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_bridge::Pitch_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Pitch_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_bridge::Pitch_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_bridge::Pitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e837e7a28d61ce2adf5af5ddb3d0d20";
  }

  static const char* value(const ::motor_bridge::Pitch_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e837e7a28d61ce2ULL;
  static const uint64_t static_value2 = 0xadf5af5ddb3d0d20ULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_bridge::Pitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_bridge/Pitch";
  }

  static const char* value(const ::motor_bridge::Pitch_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_bridge::Pitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Pitch Control Message\n"
"\n"
"# Pitch motion direction: (0 = stop, 1 = extend, 2 = retract)\n"
"int32 direction\n"
"\n"
"# Which motor (0 = both, 1 = left, 2 = right)\n"
"int32 motor\n"
;
  }

  static const char* value(const ::motor_bridge::Pitch_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_bridge::Pitch_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
      stream.next(m.motor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pitch_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_bridge::Pitch_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_bridge::Pitch_<ContainerAllocator>& v)
  {
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
    s << indent << "motor: ";
    Printer<int32_t>::stream(s, indent + "  ", v.motor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_BRIDGE_MESSAGE_PITCH_H
