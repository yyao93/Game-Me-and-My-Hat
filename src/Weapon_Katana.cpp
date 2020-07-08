#include "../include/Weapon_Katana.h"
#include "../include/TextureHolder.h"
#include <cmath>

Weapon_Katana::Weapon_Katana() {
  m_Sprite = Sprite(TextureHolder::GetTexture("../resources/graphics/katana.png"));
}

void Weapon_Katana::spawn(Player_2 player_2) {
  m_Position = player_2.getmPosition();
  m_Sprite.setPosition(m_Position);
  m_Direction = player_2.getmDirection();
  m_Sprite.setOrigin(player_2.getCenterOrigin());
}

void Weapon_Katana::update(Player_2 player_2) {
  m_Position = player_2.getmPosition();
  m_Direction = player_2.getmDirection(); // this part will change later
  m_Sprite.setPosition(m_Position);
  m_Sprite.setRotation(180 * (atan2(m_Direction.x, m_Direction.y)) / M_PI);
}
