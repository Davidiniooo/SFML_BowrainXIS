#include<SFML/Graphics.hpp>   //Graphics-Library
#include"GameInformation.hpp"

#ifndef CDRAWABLEOBJECT_HPP
#define CDRAWABLEOBJECT_HPP

class CDrawableObject
{
public:
  CDrawableObject();   //Constructor
  void setId(unsigned long long id);
  void init(std::string textureFile, float x, float y, float width, float height, float rotation);
  void setTexture(std::string textureFile);
  void setPosition(float x, float y);
  void setRotation(float rotation);
  void setSize(float width, float height);
  void render();   // rendering funktion
protected:
  sf::Sprite m_sprite;      // sprite generated by the texture
  sf::Texture m_texture;    // objects texture
  float m_height;   // object height
  float m_width;    // object width
  float m_x;   // x-Coords
  float m_y;   // y-Coords
  float m_rotation; // The objects rotation
  unsigned long long m_id;     // id for tracking purpose
};

#endif
