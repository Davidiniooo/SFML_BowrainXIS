#include<SFML/Graphics.hpp>
#include"Singleton.cpp"

#ifndef TIMER_HPP
#define TIMER_HPP

#define g_pTimer CTimer::Get()

class CTimer : public TSingleton<CTimer>
{
public:
  CTimer();
  float getElapsed();
  void reset();
private:
  sf::Clock clock;
  sf::Time elapsed;
  float timeasfloat;
};
#endif
