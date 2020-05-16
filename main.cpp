#include "CFramework.hpp"
#include "CDrawableObject.hpp"

int main()
{
  g_pFramework->init(512,512);
  CDrawableObject object;
  object.init("Textures/basic_player.png", 0.f, 0.f, 512.f, 512.f, 0.f);

  while (true)
  {
    g_pFramework->reset();
    object.render();
    g_pFramework->display();
  }
  return 0;
}
