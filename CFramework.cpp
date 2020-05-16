#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>  //graphics Library

#include"CFramework.hpp"

CFramework::CFramework()  //window class
{
  window.create(sf::VideoMode(800, 600), "BowrainXIS"); //creates window
}

void CFramework::display()  //display function
{
  window.display();
}

void CFramework::renderSprite(sf::Sprite sprite)  //function to render a Sprite
{
  window.clear();
  window.draw(sprite);
}
