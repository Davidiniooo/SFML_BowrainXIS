#include"Singleton.cpp"
#include"Hitbox.cpp"
#include<list>

#ifndef GAMEINFORMATION_HPP
#define GAMEINFORMATION_HPP

#define g_pInformation CGameInformation::Get()

class CGameInformation : public TSingleton<CGameInformation>{
public:
  void addHitbox(unsigned long long id, sf::FloatRect rect);
  std::list<Hitbox> getHitboxes(){return list_hitboxes;}
private:
  std::list<Hitbox> list_hitboxes;
};

#endif
