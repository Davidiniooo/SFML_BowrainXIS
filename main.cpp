#include "CFramework.hpp"
#include "CDrawableObject.hpp"

int main()
{
  g_pFramework->init(1000,1000);
  CDrawableObject object("Textures/basic_player.png", 0, 0, 1024, 1024, 0);
  object.render();
  g_pFramework->display();
  
  return 0;
}
