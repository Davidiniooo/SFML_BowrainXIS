#include"CDrawableObject.hpp"


class CBlock : public CDrawableObject{
public:
  CBlock();
  void update();
  void setValues(float hp, bool destroyable);
protected:
  float m_healthpoints;
  bool m_isdestroyable;
};
