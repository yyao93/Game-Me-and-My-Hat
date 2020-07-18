#include <cmath>

#include "../include/Player.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

void Player::spawn(Vector2f startPos) {
  pPos = startPos;
  pDir = Vector2f(0, 0);
  pSprite = isPlayer1 ? Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/player_1.png"))) : Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/player_2.png")));
  blinkGap = isPlayer1 ? 5 : 3;
  blinkSpeed = isPlayer1 ? 20 : 30;
  lastBlinkTime = 0;
  pSprite.setPosition(pPos);
  pSprite.setOrigin(this -> getOrigin());
  pSpeed = 400;
  isAlive = true;
  pHealth = 10;
  //isLeft = isRight = isUp = isDown = false;
  pHealthBarHeight = 20;
  pHealthBar.setSize(Vector2f(pHealth * pHealthBarHeight, pHealthBarHeight));
  pHealthBar.setFillColor(Color(255, pHealth * 10, pHealth * 20));
  pHealthBar.setPosition(startPos + Vector2f(- pHealth * pHealthBarHeight / 2, 90));
  pBlink.setFillColor(Color::Black);
  pBlink.setSize(Vector2f(pHealthBarHeight, pHealthBarHeight));
  pBlink.setPosition(startPos);
  //pHealthBar.setFillColor(Color::Red);
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
    isSliding = Keyboard::isKeyPressed(Keyboard::K) ? true : false;
    if (!isSliding) {
      isUp = Keyboard::isKeyPressed(Keyboard::W) ? true : false;
      isLeft = Keyboard::isKeyPressed(Keyboard::A) ? true : false;
      isDown = Keyboard::isKeyPressed(Keyboard::S) ? true : false;
      isRight = Keyboard::isKeyPressed(Keyboard::D) ? true : false;
    }
    if (canBlink) {
      isBlinking = Keyboard::isKeyPressed(Keyboard::L) ? true : false;
    } else {
      isBlinking = false;
    }
  } else {
    isSliding = Keyboard::isKeyPressed(Keyboard::RBracket) ? true : false;
    if (!isSliding) {
      isUp = Keyboard::isKeyPressed(Keyboard::Up) ? true : false;
      isLeft = Keyboard::isKeyPressed(Keyboard::Left) ? true : false;
      isDown = Keyboard::isKeyPressed(Keyboard::Down) ? true : false;
      isRight = Keyboard::isKeyPressed(Keyboard::Right) ? true : false;
    }
    if (canBlink) {
      isBlinking = Keyboard::isKeyPressed(Keyboard::Backslash) ? true : false;
    } else {
      isBlinking = false;
    }
  }
  isMoving = isUp || isDown || isLeft || isRight;
}

void Player::update(float elapsedTime) {
  if (isSliding && isMoving) {
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
  lastBlinkTime += elapsedTime;
  if (isBlinking) {
    canBlink = false;
    lastBlinkTime = 0;
    pPos.x += blinkSpeed * pDir.x;
    pPos.y -= blinkSpeed * pDir.y;
  } else {
    if (lastBlinkTime > blinkGap) {
      canBlink = true;
    }
  }
  if (pPos.x < 0)
    pPos.x = 0;
  if (pPos.x > 5000)
    pPos.x = 5000;
  if (pPos.y < 0)
    pPos.y = 0;
  if (pPos.y > 5000)
    pPos.y = 5000;
  pSprite.setPosition(pPos);
  pSprite.setRotation(180 * (atan2(pDir.x, pDir.y)) / M_PI);
  pHealthBar.setSize(Vector2f(pHealth * pHealthBarHeight, pHealthBarHeight));
  pHealthBar.setFillColor(Color(255, pHealth * 10, pHealth * 20));
  pHealthBar.setPosition(pPos + Vector2f(- pHealth * pHealthBarHeight / 2, 90));
  pBlink.setPosition(pPos);
  // health
  if (isHit) {
    pHealth--;
    isHit = false;
    if (pHealth <= 0) {
      isAlive = false;
    }
  }
}

void Player::draw(RenderWindow _window_) {
  _window_.draw(pSprite);
}
