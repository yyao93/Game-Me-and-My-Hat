#include "../include/Engine.h"

void Engine::draw() {
  window.clear(Color::White);
  if (!isScreenSplited) {
    window.setView(mainView);
    window.draw(backgroundSprite);
    for (int i = 0; i < 10; i++) {
      window.draw(brick[i].getSprite());
    }
    if (player1.getIsAlive()) {
      window.draw(player1.getSprite());
      window.draw(bow.getSprite());
      window.draw(player1.getHealthBar());
      if (player1.getCanBlink()) {
        window.draw(player1.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (arrow[i].getIsInFlight()) {
          window.draw(arrow[i].getSprite());
        }
      }
    }
    if (player2.getIsAlive()) {
      window.draw(player2.getSprite());
      window.draw(katana.getSprite());
      window.draw(player2.getHealthBar());
      if (player2.getCanBlink()) {
        window.draw(player2.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (blade[i].getIsInFlight()) {
          window.draw(blade[i].getSprite());
        }
      }
    }
  }
  if (isScreenSplited){
    // Left side
    window.setView(leftView);
    window.draw(backgroundSprite);
    for (int i = 0; i < 10; i++) {
      window.draw(brick[i].getSprite());
    }
    if (player1.getIsAlive()) {
      window.draw(player1.getSprite());
      window.draw(bow.getSprite());
      window.draw(player1.getHealthBar());
      if (player1.getCanBlink()) {
        window.draw(player1.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (arrow[i].getIsInFlight()) {
          window.draw(arrow[i].getSprite());
        }
      }
    }
    if (player2.getIsAlive()) {
      window.draw(player2.getSprite());
      window.draw(katana.getSprite());
      window.draw(player2.getHealthBar());
      if (player2.getCanBlink()) {
        window.draw(player2.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (blade[i].getIsInFlight()) {
          window.draw(blade[i].getSprite());
        }
      }
    }
    // Right side
    window.setView(rightView);
    window.draw(backgroundSprite);
    for (int i = 0; i < 10; i++) {
      window.draw(brick[i].getSprite());
    }
    if (player1.getIsAlive()) {
      window.draw(player1.getSprite());
      window.draw(bow.getSprite());
      window.draw(player1.getHealthBar());
      if (player1.getCanBlink()) {
        window.draw(player1.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (arrow[i].getIsInFlight()) {
          window.draw(arrow[i].getSprite());
        }
      }
    }
    if (player2.getIsAlive()) {
      window.draw(player2.getSprite());
      window.draw(katana.getSprite());
      window.draw(player2.getHealthBar());
      if (player2.getCanBlink()) {
        window.draw(player2.getBlink());
      }
      for (int i = 0; i < 100; i++) {
        if (blade[i].getIsInFlight()) {
          window.draw(blade[i].getSprite());
        }
      }
    }
  }
  window.display();

}
