# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from se2_navigation_msgs/PathRequestMsg.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class PathRequestMsg(genpy.Message):
  _md5sum = "e0af408eeb123474bf9e677b140defe0"
  _type = "se2_navigation_msgs/PathRequestMsg"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose startingPose
geometry_msgs/Pose goalPose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['startingPose','goalPose']
  _slot_types = ['geometry_msgs/Pose','geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       startingPose,goalPose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PathRequestMsg, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.startingPose is None:
        self.startingPose = geometry_msgs.msg.Pose()
      if self.goalPose is None:
        self.goalPose = geometry_msgs.msg.Pose()
    else:
      self.startingPose = geometry_msgs.msg.Pose()
      self.goalPose = geometry_msgs.msg.Pose()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_14d().pack(_x.startingPose.position.x, _x.startingPose.position.y, _x.startingPose.position.z, _x.startingPose.orientation.x, _x.startingPose.orientation.y, _x.startingPose.orientation.z, _x.startingPose.orientation.w, _x.goalPose.position.x, _x.goalPose.position.y, _x.goalPose.position.z, _x.goalPose.orientation.x, _x.goalPose.orientation.y, _x.goalPose.orientation.z, _x.goalPose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.startingPose is None:
        self.startingPose = geometry_msgs.msg.Pose()
      if self.goalPose is None:
        self.goalPose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 112
      (_x.startingPose.position.x, _x.startingPose.position.y, _x.startingPose.position.z, _x.startingPose.orientation.x, _x.startingPose.orientation.y, _x.startingPose.orientation.z, _x.startingPose.orientation.w, _x.goalPose.position.x, _x.goalPose.position.y, _x.goalPose.position.z, _x.goalPose.orientation.x, _x.goalPose.orientation.y, _x.goalPose.orientation.z, _x.goalPose.orientation.w,) = _get_struct_14d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_14d().pack(_x.startingPose.position.x, _x.startingPose.position.y, _x.startingPose.position.z, _x.startingPose.orientation.x, _x.startingPose.orientation.y, _x.startingPose.orientation.z, _x.startingPose.orientation.w, _x.goalPose.position.x, _x.goalPose.position.y, _x.goalPose.position.z, _x.goalPose.orientation.x, _x.goalPose.orientation.y, _x.goalPose.orientation.z, _x.goalPose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.startingPose is None:
        self.startingPose = geometry_msgs.msg.Pose()
      if self.goalPose is None:
        self.goalPose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 112
      (_x.startingPose.position.x, _x.startingPose.position.y, _x.startingPose.position.z, _x.startingPose.orientation.x, _x.startingPose.orientation.y, _x.startingPose.orientation.z, _x.startingPose.orientation.w, _x.goalPose.position.x, _x.goalPose.position.y, _x.goalPose.position.z, _x.goalPose.orientation.x, _x.goalPose.orientation.y, _x.goalPose.orientation.z, _x.goalPose.orientation.w,) = _get_struct_14d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_14d = None
def _get_struct_14d():
    global _struct_14d
    if _struct_14d is None:
        _struct_14d = struct.Struct("<14d")
    return _struct_14d
