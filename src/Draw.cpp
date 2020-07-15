#include "../include/Engine.h"

void Engine::draw() {
  window.clear(Color::White);
  if (!isScreenSplited) {
    window.setView(mainView);
    window.draw(backgroundSprite);
    // player1.draw(window);
    // player2.draw(window);
    // bow.draw(window);
    // katana.draw(window);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
  }
  if (isScreenSplited){
    // Left side
    window.setView(leftView);
    window.draw(backgroundSprite);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
    // Right side
    window.setView(rightView);
    window.draw(backgroundSprite);
    window.draw(player1.getSprite());
    window.draw(player2.getSprite());
    window.draw(bow.getSprite());
    window.draw(katana.getSprite());
  }
  window.display();

}
