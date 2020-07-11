#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "Player.h"
#include "fullpath.h"

using namespace sf;

class Engine {
private:
  TextureHolder th;
  Player player1, player2;
  bool isPlaying, isStarting, isScreenSplited;
  // The following may change
  RenderWindow window;
  View mainView, leftView, rightView;
  Sprite backgroundSprite;
  void input();
  void update(float dtAsSeconds);
  void draw();
public:
  Engine();
  void run();
};

#endif
