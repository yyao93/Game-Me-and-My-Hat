#include "../include/Engine.h"

void Engine::draw() {
  m_window.clear(Color::White);
  if (!m_SplitScreen) {
    m_window.setView(m_BGMainView);
    m_window.draw(m_BackgroundSprite);
    m_window.setView(m_MainView);
  } else {
    m_window.setView(m_BGLeftView);
    m_window.draw(m_BackgroundSprite);
    m_window.setView(m_LeftView);
    m_window.setView(m_BGRightView);
    m_window.draw(m_BackgroundSprite);
    m_window.setView(m_BGRightView);
  }
  m_window.display();
}
