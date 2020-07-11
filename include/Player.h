#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Player {
private:
  Sprite pSprite;
  bool isLeft, isRight, isUp, isDown, isPlayer1;
  float pSpeed;
  Vector2f pPos, pDir;
public:
  Player() {};
  Player(bool player_1) : isPlayer1(player_1) {};
  void spawn(Vector2f startPos);
  void pInput();
  Vector2f getOrigin();
  Vector2f getCenter();
  Sprite getSprite() {return pSprite;};
  Vector2f getPosition() {return pPos;};
  Vector2f getDirection() {return pDir;};
  void update(float elapsedTime);
};

#endif
