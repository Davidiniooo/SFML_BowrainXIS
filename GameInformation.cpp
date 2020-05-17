#include "GameInformation.hpp"

void CGameInformation::addHitbox(unsigned long long id, sf::FloatRect rect){
  Hitbox temp_hitbox;
  temp_hitbox.id = id;
  temp_hitbox.hitbox = rect;
  list_hitboxes.push_back(temp_hitbox);
}
