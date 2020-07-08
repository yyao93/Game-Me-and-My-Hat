#include "../include/Engine.h"

void Engine::draw() {
  m_window.clear(Color::White);
  if (!m_SplitScreen) {
    m_window.setView(m_MainView);
    m_window.draw(m_BackgroundSprite);
    m_window.draw(m_Player_1.getSprite());
    m_window.draw(m_Player_2.getSprite());
    m_window.draw(m_Bow.getSprite());
    m_window.draw(m_Katana.getSprite());
  }
  if (m_SplitScreen){
    // Left side
    m_window.setView(m_LeftView);
    m_window.draw(m_BackgroundSprite);
    m_window.draw(m_Player_1.getSprite());
    m_window.draw(m_Player_2.getSprite());
    m_window.draw(m_Bow.getSprite());
    m_window.draw(m_Katana.getSprite());
    // Right side
    m_window.setView(m_RightView);
    m_window.draw(m_BackgroundSprite);
    m_window.draw(m_Player_1.getSprite());
    m_window.draw(m_Player_2.getSprite());
    m_window.draw(m_Bow.getSprite());
    m_window.draw(m_Katana.getSprite());
  }
  m_window.display();

}
