// Generated by gencpp from file se2_grid_map_generator_msgs/SetUniformValueResponse.msg
// DO NOT EDIT!


#ifndef SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUERESPONSE_H
#define SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace se2_grid_map_generator_msgs
{
template <class ContainerAllocator>
struct SetUniformValueResponse_
{
  typedef SetUniformValueResponse_<ContainerAllocator> Type;

  SetUniformValueResponse_()
    : success(false)  {
    }
  SetUniformValueResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetUniformValueResponse_

typedef ::se2_grid_map_generator_msgs::SetUniformValueResponse_<std::allocator<void> > SetUniformValueResponse;

typedef boost::shared_ptr< ::se2_grid_map_generator_msgs::SetUniformValueResponse > SetUniformValueResponsePtr;
typedef boost::shared_ptr< ::se2_grid_map_generator_msgs::SetUniformValueResponse const> SetUniformValueResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator1> & lhs, const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator1> & lhs, const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace se2_grid_map_generator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "se2_grid_map_generator_msgs/SetUniformValueResponse";
  }

  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Response\n"
"bool success\n"
"\n"
;
  }

  static const char* value(const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetUniformValueResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::se2_grid_map_generator_msgs::SetUniformValueResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SE2_GRID_MAP_GENERATOR_MSGS_MESSAGE_SETUNIFORMVALUERESPONSE_H
