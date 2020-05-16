#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>  //graphics Library

#include"CFramework.hpp"

CFramework::CFramework(){}

void CFramework::init(int width, int height)
{
  window.create(sf::VideoMode(width, height), "BowrainXIS"); //creates window
  window.clear();
}

void CFramework::display()  //display function
{
  window.display();
}

void CFramework::renderSprite(sf::Sprite sprite)  //function to render a Sprite
{
  window.draw(sprite);
}

void CFramework::reset()
{
  g_pTimer->reset();
  window.clear();
}
