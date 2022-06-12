#ifndef _ROS_mrpt_msgs_SingleObjectObservation_h
#define _ROS_mrpt_msgs_SingleObjectObservation_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace mrpt_msgs
{

  class SingleObjectObservation : public ros::Msg
  {
    public:
      typedef float _range_type;
      _range_type range;
      typedef float _yaw_type;
      _yaw_type yaw;
      typedef float _pitch_type;
      _pitch_type pitch;
      typedef geometry_msgs::Pose _pose_wo_type;
      _pose_wo_type pose_wo;
      typedef geometry_msgs::Pose _pose_so_type;
      _pose_so_type pose_so;
      uint32_t shape_variables_length;
      typedef float _shape_variables_type;
      _shape_variables_type st_shape_variables;
      _shape_variables_type * shape_variables;
      typedef int32_t _id_type;
      _id_type id;

    SingleObjectObservation():
      range(0),
      yaw(0),
      pitch(0),
      pose_wo(),
      pose_so(),
      shape_variables_length(0), shape_variables(NULL),
      id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->range);
      offset += serializeAvrFloat64(outbuffer + offset, this->yaw);
      offset += serializeAvrFloat64(outbuffer + offset, this->pitch);
      offset += this->pose_wo.serialize(outbuffer + offset);
      offset += this->pose_so.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->shape_variables_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->shape_variables_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->shape_variables_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->shape_variables_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shape_variables_length);
      for( uint32_t i = 0; i < shape_variables_length; i++){
      union {
        float real;
        uint32_t base;
      } u_shape_variablesi;
      u_shape_variablesi.real = this->shape_variables[i];
      *(outbuffer + offset + 0) = (u_shape_variablesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_shape_variablesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_shape_variablesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_shape_variablesi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shape_variables[i]);
      }
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->range));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->yaw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pitch));
      offset += this->pose_wo.deserialize(inbuffer + offset);
      offset += this->pose_so.deserialize(inbuffer + offset);
      uint32_t shape_variables_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      shape_variables_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      shape_variables_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      shape_variables_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->shape_variables_length);
      if(shape_variables_lengthT > shape_variables_length)
        this->shape_variables = (float*)realloc(this->shape_variables, shape_variables_lengthT * sizeof(float));
      shape_variables_length = shape_variables_lengthT;
      for( uint32_t i = 0; i < shape_variables_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_shape_variables;
      u_st_shape_variables.base = 0;
      u_st_shape_variables.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_shape_variables.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_shape_variables.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_shape_variables.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_shape_variables = u_st_shape_variables.real;
      offset += sizeof(this->st_shape_variables);
        memcpy( &(this->shape_variables[i]), &(this->st_shape_variables), sizeof(float));
      }
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->id = u_id.real;
      offset += sizeof(this->id);
     return offset;
    }

    const char * getType(){ return "mrpt_msgs/SingleObjectObservation"; };
    const char * getMD5(){ return "f01d7f64085189fa2ea2feea630b2c0e"; };

  };

}
#endif
