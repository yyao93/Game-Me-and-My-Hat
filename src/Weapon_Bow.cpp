#include "../include/Weapon_Bow.h"
#include "../include/TextureHolder.h"
#include <cmath>

Weapon_Bow::Weapon_Bow() {
  m_Sprite = Sprite(TextureHolder::GetTexture("../resources/graphics/bow.png"));
}

void Weapon_Bow::spawn(Player_1 player_1) {
  m_Position = player_1.getmPosition();
  m_Sprite.setPosition(m_Position);
  m_Direction = player_1.getmDirection();
  m_Sprite.setOrigin(player_1.getCenterOrigin());
}

void Weapon_Bow::update(Player_1 player_1) {
  m_Position = player_1.getmPosition();
  m_Direction = player_1.getmDirection(); // this part will change later
  m_Sprite.setPosition(m_Position);
  m_Sprite.setRotation(180 * (atan2(m_Direction.x, m_Direction.y)) / M_PI);
}
