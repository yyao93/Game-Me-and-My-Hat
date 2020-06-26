#include "../include/Player_1.h"
#include "../include/TextureHolder.h"

Player_1::Player_1() {
  m_Sprite = Sprite(TextureHolder::GetTexture("../resources/graphics/player_1.png"));
}

bool Player_1::handleInput() {
  if (Keyboard::isKeyPressed(Keyboard::W)) {
    m_UpPressed = true;
  } else {
    m_UpPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::S)) {
    m_DownPressed = true;
  } else {
    m_DownPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::A)) {
    m_LeftPressed = true;
  } else {
    m_LeftPressed = false;
  }
  if (Keyboard::isKeyPressed(Keyboard::D)) {
    m_RightPressed = true;
  } else {
    m_RightPressed = false;
  }
  // we will think about inertia soon
  return true;
}
