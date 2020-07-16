#include <cmath>

#include "../include/Projectile.h"

void Projectile::shoot(Vector2f pos, Vector2f dir) {
  isInFlight = true;
  pPos = pos;
  oldPos = pos;
  pDir = dir;
  pSprite.setOrigin(this -> getOrigin());
  pSprite.setRotation(180 * (atan2(pDir.x, pDir.y)) / M_PI);
}

Vector2f Projectile::getOrigin() {
  return Vector2f(pSprite.getGlobalBounds().width / 2, pSprite.getGlobalBounds().height / 2);
}

bool Projectile::input(bool isPlayer1) {
  if (isPlayer1) {
    isInFlight = Keyboard::isKeyPressed(Keyboard::J) ? true : false;
  } else {
    isInFlight = Keyboard::isKeyPressed(Keyboard::LBracket) ? true : false;
  }
  return isInFlight;
}

void Projectile::update(float elapsedTime) {
  if (isInFlight) {
    pPos.x += pDir.x * pSpeed * elapsedTime;
    pPos.y -= pDir.y * pSpeed * elapsedTime;
    pSprite.setPosition(pPos);
    if ((pPos.x - oldPos.x) * (pPos.x - oldPos.x) + (pPos.y - oldPos.y) * (pPos.y - oldPos.y) > pRange * pRange) {
      isInFlight = false;
    }
    pSprite.setPosition(pPos);
  }
}

void Projectile::draw(RenderWindow _window_) {
  if (isInFlight) {
    _window_.draw(pSprite);
  }
}
