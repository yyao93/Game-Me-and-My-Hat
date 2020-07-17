#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "Weapon_Bow.h"
#include "Weapon_Katana.h"

using namespace sf;

class Player {
private:
  Sprite pSprite;
  RectangleShape pHealthBar;
  bool isLeft, isRight, isUp, isDown, isPlayer1, isSliding, isMoving, isAlive, isHit;
  float pSpeed, pHealth, pHealthBarHeight;
  Vector2f pPos, pDir;
public:
  Player() {};
  Player(bool player_1) : isPlayer1(player_1) {};
  void spawn(Vector2f startPos);
  Vector2f getOrigin();
  Vector2f getCenter();
  FloatRect getBoundary() {return pSprite.getGlobalBounds();};
  Sprite getSprite() {return pSprite;};
  bool getIsPlayer1() {return isPlayer1;};
  bool getIsSliding() {return isSliding;};
  bool getIsAlive() {return isAlive;};
  Vector2f getPosition() {return pPos;};
  Vector2f getDirection() {return pDir;};
  float getHealth() {return pHealth;};
  RectangleShape getHealthBar() {return pHealthBar;};
  void setIsHit() {isHit = true;};
  void input();
  void update(float elapsedTime);
  void draw(RenderWindow _window_);
};

#endif
