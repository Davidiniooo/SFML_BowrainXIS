#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

#ifndef CFRAMEWORK_HPP
#define CFRAMEWORK_HPP

class CFramework
{

public:
  void renderSprite(sf::Sprite &sprite);
  void display();
  CFramework();
private:
  sf::RenderWindow window;
};

#endif
