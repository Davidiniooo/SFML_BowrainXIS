#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>  //graphics Library

#include"CFramework.hpp"

CFramework::CFramework(){}

void CFramework::init(int width, int height){
  window.create(sf::VideoMode(width, height), "BowrainXIS"); //creates window
  window.clear();
  windowIsAlive = true;
}

void CFramework::display(){  //display function
  window.display();
}

void CFramework::renderSprite(sf::Sprite sprite){  //function to render a Sprite
  window.draw(sprite);
}

void CFramework::reset(){
  window.pollEvent(event);
  if(event.type == sf::Event::Closed){
    window.close();
    windowIsAlive = false;
    return;
  }
  g_pTimer->reset();
  window.clear();
}
