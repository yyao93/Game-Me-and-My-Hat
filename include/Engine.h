#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "fullpath.h"

using namespace sf;

class Engine{
private:
  // The texture holder
  TextureHolder th;
  // A regular RenderWindow
  RenderWindow m_window;
  // The main views
  View m_MainView, m_LeftView, m_RightView;
  // The main backgrounds
  View m_BGMainView, m_BGLeftView, m_BGRightView;
  // Sprite and Texture for the backgrounds
  Sprite m_BackgroundSprite;
  Texture m_BackgroundTexture;
  // Check if the game is currently playing:
  bool m_Playing = false;
  // Check if the screen is splited
  bool m_SplitScreen = false;
  // Time
  Time m_GameTimeTotal;
  void input();
  void update(float dtAsSeconds);
  void draw();
public:
  // The Engine constructor
  Engine();
  // Run calls the private functions: input, update, draw
  void run();
};

#endif
