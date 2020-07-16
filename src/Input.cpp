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
    player1.input();
    bow.input(player1.getIsPlayer1());
    player2.input();
    katana.input(player2.getIsPlayer1());
    if (arrow[idxArrow].input(player1.getIsPlayer1()) && (gameTimeTotal.asMilliseconds() - lastArrowTime.asMilliseconds() > 1000 / arrow[idxArrow].getFireRate())) {
      arrow[idxArrow].shoot(bow.getPosition(), bow.getDirection());
      idxArrow ++;
      if (idxArrow > 99) {
        idxArrow = 0;
      }
      lastArrowTime = gameTimeTotal;
    }
    if (blade[idxBlade].input(player2.getIsPlayer1()) && (gameTimeTotal.asMilliseconds() - lastBladeTime.asMilliseconds() > 1000 / blade[idxBlade].getFireRate())) {
      blade[idxBlade].shoot(katana.getPosition(), katana.getDirection());
      idxBlade ++;
      if (idxBlade > 99) {
        idxBlade = 0;
      }
      lastBladeTime = gameTimeTotal;
    }
  }
}
