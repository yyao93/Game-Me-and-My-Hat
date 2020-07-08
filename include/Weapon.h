#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;
class Weapon {
  // I think I need to use friend functions or even friend class in this case
  // I will modify this later when I am certain of this.
protected:
  Sprite m_Sprite;
  Vector2f m_Position; // I shouldn't do this and instead define a setter function, I just want to finish this quick, I will change this in the second version.
  Vector2f m_Direction;
  Texture m_Texture;
private:
public:
  void virtual spawn(Player player); // This is only a temp solution
  Sprite getSprite() {return m_Sprite;};
  Vector2f getCenter();
  Vector2f getCenterOrigin();
  float getRotation();
  void virtual update(Player player);
};

#endif
