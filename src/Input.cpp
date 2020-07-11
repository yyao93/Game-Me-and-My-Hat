#include "../include/Engine.h"

void Engine::input() {
  Event event;
  while (window.pollEvent(event)) {
    if (event.type == Event::KeyPressed) {
      // Quit
      if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        window.close();
      }
      // Start
      if (Keyboard::isKeyPressed(Keyboard::Return)) {
        isPlaying = true;
        isStarting = false;
        isScreenSplited = false;
      }
      // Switch between full and split screen
      if (Keyboard::isKeyPressed(Keyboard::E)) {
        isScreenSplited = !isScreenSplited;
      }
    }
    player1.pInput();
    player2.pInput();
  }
}
