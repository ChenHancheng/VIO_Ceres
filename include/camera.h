#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <Eigen/core>
#include <Sophus>

using namespace Eigen;
using namespace Sophus;

namespace myslam
{
  class::Camera
{
public:
  typedef std::shared_ptr<Camera> Ptr;
  float fx_, fy_, cx_, cy_, depth_scale_;
  
  Camera();
  //initialize camera Intrinsicks 
  Camera(float fx, float fy, float cx, float cy, flaot depth_scale = 0):
    fx_(fx), fy_(fy), cx_(cx), cy_(cy), depth_scale_(depth_scale)
  {}
  //why the Vector3d need to use 
  Vector3d wordl2camera(const Vector3d& p_w, const SE3& T_c_w);
  Vector2d camera2world(const Vector3d& p_c, const SE3& T_c_w);
  Vector3d camera2pixel(const Vector3d& p_c_);
  Vector3d pixel2camera(const Vector2d& p_p, double depth = 1);
  Vector2d world2pixel(const Vector3d& p_p, const SE3& T_c_w, double depth = 1);
  Vector3d pixel2world(const Vector2d& p_p, const SE3& T_c_w);
  
#endif
  