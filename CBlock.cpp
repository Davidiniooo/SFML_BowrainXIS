#include"CBlock.hpp"
#include"GameInformation.hpp"
CBlock::CBlock(){}

void CBlock::update() {
  g_pInformation->getHitboxes();
  //g_pInformation->addHitbox(m_id, sf::FloatRect(m_x,m_y,m_width,m_height));
  render();
}

void CBlock::setValues(float hp, bool destroyable){
  m_healthpoints = hp;
  m_isdestroyable = destroyable;
}
