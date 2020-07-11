#include <cmath>

#include "../include/Weapon.h"

void Weapon::spawn(Player player) {
  wPos = player.getPosition();
  wDir = player.getDirection();
  wSprite.setOrigin(this -> getOrigin());
}

Vector2f Weapon::getOrigin() {
  return Vector2f(wSprite.getGlobalBounds().width / 2, wSprite.getGlobalBounds().height / 2);
}

void Weapon::update(Player player) {
    wPos = player.getPosition();
    wDir = player.getDirection();
    wSprite.setPosition(wPos);
    wSprite.setRotation(180 * (atan2(wDir.x, wDir.y)) / M_PI);
}
