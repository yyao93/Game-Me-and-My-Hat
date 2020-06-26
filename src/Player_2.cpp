#include "../include/Player_2.h"
#include "../include/TextureHolder.h"

Player_2::Player_2() {
  m_Sprite = Sprite(TextureHolder::GetTexture("../resources/graphics/player_2.png"));
}

bool Player_2::handleInput() {
  if (Keyboard::isKeyPressed(Keyboard::Up)) {
    m_UpPressed = true;
  } else {
    m_UpPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::Down)) {
    m_DownPressed = true;
  } else {
    m_DownPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::Left)) {
    m_LeftPressed = true;
  } else {
    m_LeftPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::Right)) {
    m_RightPressed = true;
  } else {
    m_RightPressed = false;
  }
  // we will think about inertia soon
  return true;
}
