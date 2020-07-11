#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;

class Weapon{
protected:
  Sprite wSprite;
  Vector2f wPos, wDir;
public:
  void virtual spawn(Player player);
  Vector2f getOrigin();
  Vector2f getPosition() {return wPos;};
  Vector2f getDirection() {return wDir;};
  void update(Player player);
};

#endif
