#include<SFML/Window.hpp>

#include"CFramework.hpp"

CFramework::CFramework()
{
  window = new sf::RenderWindow;

  window->create(sf::VideoMode(800, 600), "BowrainXIS");
  window->setVerticalSyncEnabled(true);

  window->clear();
  window->display();
}

CFramework::display()
{
  window->display();
  window->clear();
}

CFramework::renderSprite(&sf::Sprite sprite)
{
  window->draw(sprite);
}
