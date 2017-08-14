#ifndef _FRAME_H_
#define _FRAME_H_

#include <opencv/core>
#include <Sophus>

namespace my_slam
{
  class MpaPoint;
  class frame
  {
  public:
    typedef std::shared_ptr<Frame> Ptr;
    unsigned long id;
    double time_stamp_;
    SE3 T_c_w_;
    Camera::Ptr camera_;
    Mat		clor
    
#endif