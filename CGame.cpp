#include "CGame.hpp"

CGame::CGame(){}

void CGame::init(){
  g_pFramework->init(1080, 720);
}

void CGame::runGame(){
  CEntity test1;
  test1.init("Textures/basic_player.png", 10, 10 ,10 ,10, 0);
  test1.setValues(10,10,10,10);

  while(g_pFramework->windowIsAlive == true){
    g_pFramework->reset();
    test1.render();
    test1.update();
    g_pFramework->display();
  }
}

void CGame::checkColissions(){

}
