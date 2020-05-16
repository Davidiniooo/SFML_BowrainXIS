#include "CDrawableObject.hpp"
#include "CFramework.hpp"

CDrawableObject::CDrawableObject(){}

void CDrawableObject::init(std::string textureFile, float x, float y, float width, float height, float rotation)
{
  setTexture(textureFile);
  setPosition(x, y);
  setSize(width, height);
  setRotation(rotation);
}

void CDrawableObject::setTexture(std::string textureFile)
{
  if(!m_texture.loadFromFile(textureFile));
  m_sprite.setTexture(m_texture);
}

void CDrawableObject::setPosition(float x, float y)
{
  m_x = x;
  m_y = y;
  m_sprite.setPosition(sf::Vector2f(m_x, m_y));
}

void CDrawableObject::render()
{
  g_pFramework->renderSprite(m_sprite);
}

void CDrawableObject::setRotation(float rotation)
{
  m_rotation = rotation;
  m_sprite.setRotation(m_rotation);
}

void CDrawableObject::setSize(float width, float height)
{
  m_width = width;
  m_height = height;
  m_sprite.setScale(sf::Vector2f(m_width/m_texture.getSize().x, m_height/m_texture.getSize().y));
}
