#include "../include/Projectile.h"

void Projectile::spawn(Vector2f pos, Vector2f dir) {
  pPos = pos;
  pDir = dir;
  pSprite.setOrigin(this -> getOrigin());
}

Vector2f Projectile::getOrigin() {
  return Vector2f(pSprite.getGlobalBounds().width / 2, pSprite.getGlobalBounds().height / 2);
}

void Projectile::input(bool isPlayer1) {
  if (isPlayer1) {
    isFired = Keyboard::isKeyPressed(Keyboard::J) ? true : false;
  } else {
    isFired = Keyboard::isKeyPressed(Keyboard::LBracket) ? true : false;
  }
}

void Projectile::update(float elapsedTime) {
  
}
