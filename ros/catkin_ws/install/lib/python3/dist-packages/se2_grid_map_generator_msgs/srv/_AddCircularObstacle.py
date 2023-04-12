# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from se2_grid_map_generator_msgs/AddCircularObstacleRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import se2_grid_map_generator_msgs.msg
import std_msgs.msg

class AddCircularObstacleRequest(genpy.Message):
  _md5sum = "439d75d797d3b32eca34874ea1d64d5d"
  _type = "se2_grid_map_generator_msgs/AddCircularObstacleRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Request
se2_grid_map_generator_msgs/CircularObstacle obstacle

================================================================================
MSG: se2_grid_map_generator_msgs/CircularObstacle
se2_grid_map_generator_msgs/Circle2D circle
std_msgs/String[] layers
std_msgs/Float64[] values
================================================================================
MSG: se2_grid_map_generator_msgs/Circle2D
se2_grid_map_generator_msgs/Position2D center
std_msgs/Float64 radius
================================================================================
MSG: se2_grid_map_generator_msgs/Position2D
std_msgs/Float64 x
std_msgs/Float64 y
================================================================================
MSG: std_msgs/Float64
float64 data
================================================================================
MSG: std_msgs/String
string data
"""
  __slots__ = ['obstacle']
  _slot_types = ['se2_grid_map_generator_msgs/CircularObstacle']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       obstacle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AddCircularObstacleRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.obstacle is None:
        self.obstacle = se2_grid_map_generator_msgs.msg.CircularObstacle()
    else:
      self.obstacle = se2_grid_map_generator_msgs.msg.CircularObstacle()

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
      buff.write(_get_struct_3d().pack(_x.obstacle.circle.center.x.data, _x.obstacle.circle.center.y.data, _x.obstacle.circle.radius.data))
      length = len(self.obstacle.layers)
      buff.write(_struct_I.pack(length))
      for val1 in self.obstacle.layers:
        _x = val1.data
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.obstacle.values)
      buff.write(_struct_I.pack(length))
      for val1 in self.obstacle.values:
        _x = val1.data
        buff.write(_get_struct_d().pack(_x))
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
      if self.obstacle is None:
        self.obstacle = se2_grid_map_generator_msgs.msg.CircularObstacle()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.obstacle.circle.center.x.data, _x.obstacle.circle.center.y.data, _x.obstacle.circle.radius.data,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.obstacle.layers = []
      for i in range(0, length):
        val1 = std_msgs.msg.String()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.data = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.data = str[start:end]
        self.obstacle.layers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.obstacle.values = []
      for i in range(0, length):
        val1 = std_msgs.msg.Float64()
        start = end
        end += 8
        (val1.data,) = _get_struct_d().unpack(str[start:end])
        self.obstacle.values.append(val1)
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
      buff.write(_get_struct_3d().pack(_x.obstacle.circle.center.x.data, _x.obstacle.circle.center.y.data, _x.obstacle.circle.radius.data))
      length = len(self.obstacle.layers)
      buff.write(_struct_I.pack(length))
      for val1 in self.obstacle.layers:
        _x = val1.data
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.obstacle.values)
      buff.write(_struct_I.pack(length))
      for val1 in self.obstacle.values:
        _x = val1.data
        buff.write(_get_struct_d().pack(_x))
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
      if self.obstacle is None:
        self.obstacle = se2_grid_map_generator_msgs.msg.CircularObstacle()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.obstacle.circle.center.x.data, _x.obstacle.circle.center.y.data, _x.obstacle.circle.radius.data,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.obstacle.layers = []
      for i in range(0, length):
        val1 = std_msgs.msg.String()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.data = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.data = str[start:end]
        self.obstacle.layers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.obstacle.values = []
      for i in range(0, length):
        val1 = std_msgs.msg.Float64()
        start = end
        end += 8
        (val1.data,) = _get_struct_d().unpack(str[start:end])
        self.obstacle.values.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from se2_grid_map_generator_msgs/AddCircularObstacleResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class AddCircularObstacleResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "se2_grid_map_generator_msgs/AddCircularObstacleResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Response
bool success

"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AddCircularObstacleResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

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
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
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
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class AddCircularObstacle(object):
  _type          = 'se2_grid_map_generator_msgs/AddCircularObstacle'
  _md5sum = '5c6462e7f4d4eb409c7358cc94ad2577'
  _request_class  = AddCircularObstacleRequest
  _response_class = AddCircularObstacleResponse