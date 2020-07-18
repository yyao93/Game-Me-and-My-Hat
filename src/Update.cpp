#include "../include/Engine.h"

void Engine::update(float dtAsSeconds) {
  if (isStarting) {
    player1.spawn(Vector2f(2300, 2500));
    player2.spawn(Vector2f(2700, 2500));
    for (int i = 0; i < 10; i++) {
      brick[i].setPosition(Vector2f(2500, 2100 + 80 * i));
    }
  }
  if (isPlaying) {
    player1.update(dtAsSeconds);
    player2.update(dtAsSeconds);
    bow.update(player1.getPosition(), player1.getDirection(), player1.getIsSliding());
    katana.update(player2.getPosition(), player2.getDirection(), player2.getIsSliding());
    for (int i = 0; i < 10; i++) {
      brick[i].update();
    }
    for (int i = 0; i < 100; i++) {
      arrow[i].update(dtAsSeconds);
      blade[i].update(dtAsSeconds);
    }
    // collision detection
    for (int i = 0; i < 100; i++) {
      if (arrow[i].getIsInFlight() && arrow[i].getBoundary().intersects(player2.getBoundary())) {
        player2.setIsHit();
        arrow[i].stop();
      }
      if (blade[i].getIsInFlight() && blade[i].getBoundary().intersects(player1.getBoundary())) {
        player1.setIsHit();
        blade[i].stop();
      }
      for (int j = 0; j < 10; j++) {
        if ((arrow[i].getIsInFlight() && arrow[i].getBoundary().intersects(brick[j].getBoundary()))) {
          arrow[i].stop();
        }
        if ((blade[i].getIsInFlight() && blade[i].getBoundary().intersects(brick[j].getBoundary()))) {
          blade[i].stop();
        }
      }
    }
  }
  if (isScreenSplited) {
    leftView.setCenter(player1.getCenter());
    rightView.setCenter(player2.getCenter());
  } else {
    //mainView.setCenter((player1.getCenter() + player2.getCenter()) / 2); //check this
    mainView.setCenter((player1.getCenter().x + player2.getCenter().x) / 2, (player1.getCenter().y + player2.getCenter().y) / 2);
  }
}


