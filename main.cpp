#include "CFramework.hpp"
#include "CDrawableObject.hpp"

int main()
{
  CDrawableObject object("Textures/basic_player.png", 0, 0, 1024, 1024, 0);
  object.render();
  g_pFramework->display();

  while(true);
  return 0;
}
