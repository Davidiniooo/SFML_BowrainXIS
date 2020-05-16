#include "CDrawableObject.hpp"
#include "CFramework.hpp"

CDrawableObject::CDrawableObject(std::string textureFile, float x, float y, float width, float height, float rotation)  //constructor
{
  if(!m_texture.loadFromFile(textureFile));

  m_x = x;
  m_y = y;
  m_width = width;
  m_height = height;
  m_rotation = rotation;

  m_sprite.setTexture(m_texture);
  m_sprite.setPosition(sf::Vector2f(m_x, m_y));
  m_sprite.setScale(sf::Vector2f(m_width/m_texture.getSize().x, m_height/m_texture.getSize().y));
  m_sprite.setRotation(m_rotation);
}

void CDrawableObject::render()
{
  g_pFramework->renderSprite(m_sprite);
}
