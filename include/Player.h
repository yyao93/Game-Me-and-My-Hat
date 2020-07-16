#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "Weapon_Bow.h"
#include "Weapon_Katana.h"

using namespace sf;

class Player {
private:
  Sprite pSprite;
  bool isLeft, isRight, isUp, isDown, isPlayer1, isSliding, isMoving;
  float pSpeed;
  Vector2f pPos, pDir;
public:
  Player() {};
  Player(bool player_1) : isPlayer1(player_1) {};
  void spawn(Vector2f startPos);
  Vector2f getOrigin();
  Vector2f getCenter();
  Sprite getSprite() {return pSprite;};
  bool getIsPlayer1() {return isPlayer1;};
  bool getIsSliding() {return isSliding;};
  Vector2f getPosition() {return pPos;};
  Vector2f getDirection() {return pDir;};
  void input();
  void update(float elapsedTime);
  void draw(RenderWindow _window_);
};

#endif
