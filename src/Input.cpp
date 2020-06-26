#include "../include/Engine.h"

void Engine::input() {
  Event event;
  while (m_window.pollEvent(event)) {
    if (event.type == Event::KeyPressed) {
      // Quit
      if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        m_window.close();
      }
      // Start
      if (Keyboard::isKeyPressed(Keyboard::Return)) {
        m_Playing = true;
      }
      // Switch between full and split Screen
      if (Keyboard::isKeyPressed(Keyboard::E)) {
        m_SplitScreen = !m_SplitScreen;
      }
    }
  }
}
