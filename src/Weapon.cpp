#include <cmath>

#include "../include/Weapon.h"

void Weapon::spawn(Vector2f pos, Vector2f dir) {
  wPos = pos;
  wDir = dir;
  wSprite.setOrigin(this -> getOrigin());
}

Vector2f Weapon::getOrigin() {
  return Vector2f(wSprite.getGlobalBounds().width / 2, wSprite.getGlobalBounds().height / 2);
}

void Weapon::input(bool isPlayer1) {
  if (isPlayer1) {
    isUp = Keyboard::isKeyPressed(Keyboard::W) ? true : false;
    isLeft = Keyboard::isKeyPressed(Keyboard::A) ? true : false;
    isDown = Keyboard::isKeyPressed(Keyboard::S) ? true : false;
    isRight = Keyboard::isKeyPressed(Keyboard::D) ? true : false;
  } else {
    isUp = Keyboard::isKeyPressed(Keyboard::Up) ? true : false;
    isLeft = Keyboard::isKeyPressed(Keyboard::Left) ? true : false;
    isDown = Keyboard::isKeyPressed(Keyboard::Down) ? true : false;
    isRight = Keyboard::isKeyPressed(Keyboard::Right) ? true : false;
  }
}

void Weapon::update(Vector2f pos, Vector2f dir, bool isSliding) {
  wPos = pos;
  if (!isSliding) {
    wDir = dir;
  } else {
    wDir = Vector2f(0, 0);
    if (isRight || isLeft || isUp || isDown) {
      if (isRight) {wDir.x++;}
      if (isLeft) {wDir.x--;}
      if (isUp) {wDir.y++;}
      if (isDown) {wDir.y--;}
    } else {
      wDir = dir;
    }
  }
  wSprite.setPosition(wPos);
  wSprite.setRotation(180 * (atan2(wDir.x, wDir.y)) / M_PI);
}

void Weapon::draw(RenderWindow _window_) {
  _window_.draw(wSprite);
}

