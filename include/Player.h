#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

using namespace sf;
class Player {
protected:
  Sprite m_Sprite;
  bool m_LeftPressed, m_RightPressed, m_UpPressed, m_DownPressed;
private:
  float m_Speed = 400;
  Vector2f m_Position;
  Texture m_Texture;
public:
  void spawn(Vector2f startPosition);
  bool virtual handleInput() = 0;
  FloatRect getPosition();
  Sprite getSprite();
  Vector2f getCenter();
  void update(float elapsedTime); // this function is called every frame
};

#endif
