#include "CDrawableObject.hpp"

CDrawableObject::CDrawableObject(sf::Texture texture,float x,float y,float width,float height,float rotation)
{
  m_texture = texture;
  m_x = x;
  m_y = y;
  m_width = width;
  m_height = height;
  m_rotation = rotation;
}

void CDrawableObject::render()
{
  m_sprite.setTexture(m_texture);

  m_sprite.setPosition(sf::Vector2f(m_x, m_y));
  m_sprite.setScale(sf::Vector2f(m_width, m_height));
  m_sprite.setRotation(m_rotation);
  fwork.renderSprite(m_sprite);
}
