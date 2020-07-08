#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "para.h"

using namespace sf;
class Player {
protected:
  Sprite m_Sprite;
  bool m_LeftPressed, m_RightPressed, m_UpPressed, m_DownPressed;
  // should have the getter functions for the above
private:
  float m_Speed = 400;
  Vector2f m_Position;
  Vector2f m_Direction;
  Texture m_Texture;
public:
  void spawn(Vector2f startPosition);
  bool virtual handleInput() = 0;
  FloatRect getPosition();
  Sprite getSprite();
  Vector2f getCenter();
  Vector2f getCenterOrigin();
  float getRotation();
  Vector2f getmPosition() {return m_Position;};
  Vector2f getmDirection() {return m_Direction;};
  void update(float elapsedTime); // this function is called every frame
};

#endif
