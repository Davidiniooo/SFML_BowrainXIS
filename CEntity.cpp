#include "CEntity.hpp"
#include "Timer.hpp"
#include <math.h>

#define PI 3.14159265358979323846264338327950288419716939937510   //define PI

CEntity::CEntity(){}

void CEntity::setValues(float healthpoints, float speed, float velocity, float direction){
  setHealthpoints(healthpoints);
  setSpeed(speed);
  setVelocity(velocity);
  setDirection(direction);
}

void CEntity::setDirection(float direction){
  m_direction = direction;
}

void CEntity::setSpeed(float speed){
  m_speed = speed;
}

void CEntity::setVelocity(float velocity){
  m_velocity = velocity;
}

void CEntity::setHealthpoints(float healthpoints){
  m_healthpoints = healthpoints;
}

void CEntity::update(){
  float distance = g_pTimer->getElapsed()*m_velocity; //calculate distance
  if(cos(2*PI*(m_direction/360))!=0){m_x += cos(2*PI*(m_direction/360))*distance;}  //calculate x-steps
  if(sin(2*PI*(m_direction/360))!=0){m_y -= sin(2*PI*(m_direction/360))*distance;}  //calculate y-steps
}
