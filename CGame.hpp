#include "CFramework.hpp"
#include "CBlock.hpp"
#include "CEntity.hpp"
#include <list>

#ifndef CGAME_HPP
#define CGAME_HPP

class CGame{
public:
  CGame();
  void init();
  void runGame();
private:
  void checkColissions();
  void checkEvents();
};

#endif
