#include"CDrawableObject.hpp"

#ifndef CBLOCK_HPP
#define CBLOCK_HPP

class CBlock : public CDrawableObject{
public:
  CBlock();
  void update();
  void setValues(float hp, bool destroyable);
protected:
  float m_healthpoints;
  bool m_isdestroyable;
};
#endif
