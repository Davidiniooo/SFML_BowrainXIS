#include "CDrawableObject.hpp"

#ifndef CENTITY_HPP
#define CENTITY_HPP

class CEntity : public CDrawableObject
{
public:
  CEntity();
  void update();
  void setValues(float healthpoints, float speed, float velocity, float direction);
  void setDirection(float direction);
  void setSpeed(float speed);
  void setVelocity(float velocity);
  void setHealthpoints(float healthpoints);
protected:
  float m_healthpoints;
  float m_speed;
  float m_velocity;
  float m_direction;
};

#endif
