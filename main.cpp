#include "CFramework.hpp"
#include "CDrawableObject.hpp"
#include "CEntity.hpp"

int main(){
  g_pFramework->init(1024,1024);
  CEntity entity;
  entity.init("Textures/basic_player.png", 0.f, 0.f, 512.f, 512.f, 0.f);
  entity.setValues(100.f, 1.0f, 30.f, 90.f);
  while (true){
    g_pFramework->reset();
    entity.update();
    entity.render();
    g_pFramework->display();
  }
  return 0;
}
