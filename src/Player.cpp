#include "../include/Player.h"
#include <cmath>

void Player::spawn(Vector2f startPosition) {
  m_Position.x = startPosition.x;
  m_Position.y = startPosition.y;
  m_Sprite.setPosition(m_Position);
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

void Player::update(float elapsedTime) {
  float old_x = m_Position.x, old_y = m_Position.y;
  if (m_RightPressed) {
    m_Position.x += m_Speed * elapsedTime;
  }
  if (m_LeftPressed) {
    m_Position.x -= m_Speed * elapsedTime;
  }
  if (m_UpPressed) {
    m_Position.y -= m_Speed * elapsedTime;
  }
  if (m_DownPressed) {
    m_Position.y += m_Speed * elapsedTime;
  }
  m_Sprite.setPosition(m_Position);
  m_Sprite.setRotation(180 * atan2(m_Position.x - old_x, m_Position.y - old_y));
  // I need to set rotation to the sprite as well.
}
