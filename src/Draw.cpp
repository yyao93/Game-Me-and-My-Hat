#include "../include/Engine.h"

void Engine::draw() {
  window.clear(Color::White);
  if (!isScreenSplited) {
    window.setView(mainView);
    window.draw(backgroundSprite);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
    for (int i = 0; i < 100; i++) {
      if (arrow[i].getIsInFlight()) {
        window.draw(arrow[i].getSprite());
      }
      if (blade[i].getIsInFlight()) {
        window.draw(blade[i].getSprite());
      }
    }
  }
  if (isScreenSplited){
    // Left side
    window.setView(leftView);
    window.draw(backgroundSprite);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
    for (int i = 0; i < 100; i++) {
      if (arrow[i].getIsInFlight()) {
        window.draw(arrow[i].getSprite());
      }
      if (blade[i].getIsInFlight()) {
        window.draw(blade[i].getSprite());
      }
    }
    // Right side
    window.setView(rightView);
    window.draw(backgroundSprite);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
    for (int i = 0; i < 100; i++) {
      if (arrow[i].getIsInFlight()) {
        window.draw(arrow[i].getSprite());
      }
      if (blade[i].getIsInFlight()) {
        window.draw(blade[i].getSprite());
      }
    }
  }
  window.display();

}
