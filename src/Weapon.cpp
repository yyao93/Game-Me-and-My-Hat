#include "../include/Weapon.h"
#include <cmath>

// void Weapon::spawn(Player player) {
//   m_Position = player.getmPosition();
//   m_Sprite.setPosition(m_Position);
//   m_Direction = player.getmDirection();
//   m_Sprite.setOrigin(player.getCenterOrigin());
// }

Vector2f Weapon::getCenter() {
  return Vector2f(m_Position.x + m_Sprite.getGlobalBounds().width / 2,
                  m_Position.y + m_Sprite.getGlobalBounds().height / 2);
}

Vector2f Weapon::getCenterOrigin() {
  return Vector2f(m_Sprite.getGlobalBounds().width / 2, m_Sprite.getGlobalBounds().height / 2);
}


