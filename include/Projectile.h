#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Projectile{
protected:
  Sprite pSprite;
  Vector2f oldPos, pPos, pDir;
  float pSpeed, pRange, pFireRate;
  bool isInFlight;
public:
  void shoot(Vector2f pPos, Vector2f pDir);
  void stop() {isInFlight = false;};
  bool getIsInFlight() {return isInFlight;};
  float getFireRate() {return pFireRate;};
  Vector2f getOrigin();
  Sprite getSprite() {return pSprite;};
  FloatRect getBoundary() {return pSprite.getGlobalBounds();};
  Vector2f getPosition() {return pPos;};
  Vector2f getDirection() {return pDir;};
  bool input(bool isPlayer1);
  void update(float elapsedTime);
  void draw(RenderWindow _window_);
};

#endif
