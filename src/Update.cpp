#include "../include/Engine.h"

void Engine::update(float dtAsSeconds) {
  if (isStarting) {
    player1.spawn(Vector2f(1000, 800));
    player2.spawn(Vector2f(1160, 800));
  }
  if (isPlaying) {
    player1.update(dtAsSeconds);
    player2.update(dtAsSeconds);
    bow.update(player1.getPosition(), player1.getDirection(), player1.getIsSliding());
    katana.update(player2.getPosition(), player2.getDirection(), player2.getIsSliding());
  }
  if (isScreenSplited) {
    leftView.setCenter(player1.getCenter());
    rightView.setCenter(player2.getCenter());
  } else {
    //mainView.setCenter((player1.getCenter() + player2.getCenter()) / 2); //check this
    mainView.setCenter((player1.getCenter().x + player2.getCenter().x) / 2, (player1.getCenter().y + player2.getCenter().y) / 2);
  }
}


