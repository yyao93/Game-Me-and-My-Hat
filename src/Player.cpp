#include "../include/Player.h"
#include <cmath>

void Player::spawn(Vector2f startPosition) {
  m_Position.x = startPosition.x;
  m_Position.y = startPosition.y;
  m_Sprite.setPosition(m_Position);
  m_Direction = Vector2f(0, 0);
  m_Sprite.setOrigin(this -> getCenterOrigin());
}

FloatRect Player::getPosition() {
  return m_Sprite.getGlobalBounds();
}

Sprite Player::getSprite() {
  return m_Sprite;
}

float Player::getRotation() {
  return m_Sprite.getRotation();
}

Vector2f Player::getCenter() {
  return Vector2f(m_Position.x + m_Sprite.getGlobalBounds().width / 2,
                  m_Position.y + m_Sprite.getGlobalBounds().height / 2);
}

Vector2f Player::getCenterOrigin() {
  return Vector2f(m_Sprite.getGlobalBounds().width / 2, m_Sprite.getGlobalBounds().height / 2);
}

void Player::update(float elapsedTime) {
  if (m_RightPressed || m_LeftPressed || m_UpPressed || m_DownPressed) {
    m_Direction = Vector2f(0, 0);
    // make the transition smooth
  }
  if (m_RightPressed) {
    m_Position.x += m_Speed * elapsedTime;
    m_Direction.x = 1;
  }
  if (m_LeftPressed) {
    m_Position.x -= m_Speed * elapsedTime;
    m_Direction.x = -1;
  }
  if (m_UpPressed) {
    m_Position.y -= m_Speed * elapsedTime;
    m_Direction.y = 1;
  }
  if (m_DownPressed) {
    m_Position.y += m_Speed * elapsedTime;
    m_Direction.y = -1;
  }
  m_Sprite.setPosition(m_Position);
  m_Sprite.setRotation(180 * (atan2(m_Direction.x, m_Direction.y)) / M_PI);
}
