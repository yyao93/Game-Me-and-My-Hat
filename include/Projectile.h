#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Projectile{
protected:
  Sprite pSprite;
  Vector2f oldPos, pPos, pDir;
  float pSpeed, pRange;
  bool isFired;
public:
  void virtual spawn(Vector2f pPos, Vector2f pDir);
  Vector2f getOrigin();
  Sprite getSprite() {return pSprite;};
  Vector2f getPosition() {return pPos;};
  Vector2f getDirection() {return pDir;};
  void input(bool isPlayer1);
  void update(float elapsedTime);
  void draw(RenderWindow _window_);
};

#endif
