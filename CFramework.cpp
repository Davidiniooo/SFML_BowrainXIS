#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

#include"CFramework.hpp"

CFramework::CFramework()
{
  window.create(sf::VideoMode(800, 600), "BowrainXIS");
  window.setVerticalSyncEnabled(true);

  window.clear();
}

void CFramework::display()
{
  window.display();
  window.clear();
}

void CFramework::renderSprite(sf::Sprite &sprite)
{
  window.draw(sprite);
}
