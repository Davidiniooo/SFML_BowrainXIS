#include "CFramework.hpp"
#include "CDrawableObject.hpp"
#include "CEntity.hpp"
#include "CGame.hpp"

int main(){
  CGame Game;
  Game.init();
  Game.runGame();
  return 0;
}
