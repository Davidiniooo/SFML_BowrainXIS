#include "CFramework.hpp"
#include "CBlock.hpp"
#include <list>

int main()
{
  unsigned long long globalid = 0;

  g_pFramework->init(512,512);
  CDrawableObject object;
  object.setId(globalid);
  globalid++;
  object.init("Textures/basic_player.png", 0.f, 0.f, 512.f, 512.f, 0.f);

  CBlock block;
  block.setId(globalid);
  globalid++;
  block.init("Textures/basic_player.png", 0.f, 0.f, 12.f, 12.f, 0.f);
  block.setValues(10,true);

  std::list<CDrawableObject> objects;
  objects.push_back(object);
  objects.push_back(block);
  std::list<CDrawableObject>::iterator iteratorCDrawableObject;

  iteratorCDrawableObject = objects.begin();

  while (true){

    g_pFramework->reset();
    for(iteratorCDrawableObject = objects.begin();iteratorCDrawableObject != objects.end();iteratorCDrawableObject++)
    {
      iteratorCDrawableObject->render();
    }
    g_pFramework->display();
  }
  return 0;
}
