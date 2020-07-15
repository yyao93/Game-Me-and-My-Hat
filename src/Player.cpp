#include <cmath>

#include "../include/Player.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

void Player::spawn(Vector2f startPos) {
  pPos = startPos;
  pDir = Vector2f(0, 0);
  pSprite = isPlayer1 ? Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/player_1.png"))) : Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/player_2.png")));
  pSprite.setPosition(pPos);
  pSprite.setOrigin(this -> getOrigin());
  pSpeed = 400;
  //isLeft = isRight = isUp = isDown = false;
}

Vector2f Player::getOrigin() {
  return Vector2f(pSprite.getGlobalBounds().width / 2, pSprite.getGlobalBounds().height / 2);
}

Vector2f Player::getCenter() {
  return Vector2f(pPos.x + pSprite.getGlobalBounds().width / 2,
                  pPos.y + pSprite.getGlobalBounds().height / 2);
}

void Player::input() {
  if (isPlayer1) {
    isSliding = Keyboard::isKeyPressed(Keyboard::Num2) ? true : false;
    isUp = Keyboard::isKeyPressed(Keyboard::W) ? true : false;
    isLeft = Keyboard::isKeyPressed(Keyboard::A) ? true : false;
    isDown = Keyboard::isKeyPressed(Keyboard::S) ? true : false;
    isRight = Keyboard::isKeyPressed(Keyboard::D) ? true : false;
  } else {
    isSliding = Keyboard::isKeyPressed(Keyboard::RBracket) ? true : false;
    isUp = Keyboard::isKeyPressed(Keyboard::Up) ? true : false;
    isLeft = Keyboard::isKeyPressed(Keyboard::Left) ? true : false;
    isDown = Keyboard::isKeyPressed(Keyboard::Down) ? true : false;
    isRight = Keyboard::isKeyPressed(Keyboard::Right) ? true : false;
  }
}

void Player::update(float elapsedTime) {
  if (isSliding) {
    pPos.x += pSpeed * elapsedTime * pDir.x;
    pPos.y -= pSpeed * elapsedTime * pDir.y;
  } else {
    if (isLeft || isRight || isUp || isDown) {
      // need to change this later on
      pDir = Vector2f(0, 0);
    }
    if (isRight) {
      pPos.x += pSpeed * elapsedTime;
      pDir.x++;
    }
    if (isLeft) {
      pPos.x -= pSpeed * elapsedTime;
      pDir.x--;
    }
    if (isUp) {
      pPos.y -= pSpeed * elapsedTime;
      pDir.y++;
    }
    if (isDown) {
      pPos.y += pSpeed * elapsedTime;
      pDir.y--;
    }
  }
  pSprite.setPosition(pPos);
  pSprite.setRotation(180 * (atan2(pDir.x, pDir.y)) / M_PI);
}

void Player::draw(RenderWindow _window_) {
  _window_.draw(pSprite);
}
