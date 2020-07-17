#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Weapon{
protected:
  Sprite wSprite;
  Vector2f wPos, wDir;
  bool isUp, isLeft, isDown, isRight;
public:
  void virtual spawn(Vector2f pos, Vector2f dir);
  Vector2f getOrigin();
  Sprite getSprite() {return wSprite;};
  Vector2f getPosition() {return wPos;};
  Vector2f getDirection() {return wDir;};
  FloatRect getBoundary() {return wSprite.getGlobalBounds();};
  void input(bool isPlayer1);
  void update(Vector2f pos, Vector2f dir, bool isSliding);
  void draw(RenderWindow _window_);
};

#endif
