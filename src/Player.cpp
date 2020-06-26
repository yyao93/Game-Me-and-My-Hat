#include "../include/Player.h"

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

Vector2f Player::getCenter() {
  return Vector2f(m_Position.x + m_Sprite.getGlobalBounds().width / 2,
                  m_Position.y + m_Sprite.getGlobalBounds().height / 2);
}

void Player::update(float elapsedTime) {
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
}
