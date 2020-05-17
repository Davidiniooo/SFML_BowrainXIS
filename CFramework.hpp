#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include"Singleton.cpp"
#include"Timer.hpp"

#ifndef CFRAMEWORK_HPP
#define CFRAMEWORK_HPP

#define g_pFramework CFramework::Get()

//Framework that handles graphics and other basic functionalities
class CFramework : public TSingleton<CFramework>
{
public:
  CFramework();                           //constructor
  void init(int width,int height);        //init window with height and width
  void reset();                           //resets timer and graphics buffer
  void renderSprite(sf::Sprite sprite);   //takes a sprite and renders it
  void display();                         //displays all graphics that got rendered in last tick
  sf::Event getEvent(){return event;}

private:
  sf::RenderWindow window;
  sf::Event event;
};

#endif
