#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include"Singleton.cpp"

#ifndef CFRAMEWORK_HPP
#define CFRAMEWORK_HPP

#define g_pFramework CFramework::Get()

//Framework that handles graphics and other basic functionalities
class CFramework : public TSingleton<CFramework>
{
public:
  void renderSprite(sf::Sprite sprite);  //takes a sprite and renders it
  void display();                         //displays all graphics that got rendered in last tick
  CFramework();                           //constructor

private:
  sf::RenderWindow window;
};

#endif
