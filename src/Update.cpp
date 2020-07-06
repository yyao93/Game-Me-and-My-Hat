#include "../include/Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>

#include <iostream>
using namespace sf;

void Engine::update(float dtAsSeconds) {
  if (m_Starting) {
    m_Player_1.spawn(Vector2f(1000, 800));
    m_Player_2.spawn(Vector2f(1160, 800));
  }
  if (m_Playing) {
    m_Player_1.update(dtAsSeconds);
    m_Player_2.update(dtAsSeconds);
  }
  if (m_SplitScreen) {
    m_LeftView.setCenter(m_Player_1.getCenter());
    m_RightView.setCenter(m_Player_2.getCenter());
  } else {
    m_MainView.setCenter((m_Player_1.getCenter().x + m_Player_2.getCenter().x) / 2, (m_Player_1.getCenter().y + m_Player_2.getCenter().y) / 2);
  }
}
