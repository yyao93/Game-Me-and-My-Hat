#include "../include/Engine.h"

Engine::Engine() {
  player1 = Player(true);
  player2 = Player(false);
  bow.spawn(player1.getPosition(), player1.getDirection());
  katana.spawn(player2.getPosition(), player2.getDirection());
  isStarting = true;
  Vector2f resolution;
  //isPlaying = isStarting = isScreenSplited = false;
  resolution.x = VideoMode::getDesktopMode().width;
  resolution.y = VideoMode::getDesktopMode().height;
  window.create(VideoMode(resolution.x, resolution.y), "Me2D");
  // Initialize the views
  mainView.setSize(resolution);
  leftView.setViewport(FloatRect(0.001f, 0.001f, 0.498f, 0.998f));
  rightView.setViewport(FloatRect(0.5f, 0.001f, 0.499f, 0.998f));
  // Now set m_BackgroundSprite, m_BackgroundTexture
  // I need to change the following soon
  backgroundSprite.setTexture(TextureHolder::GetTexture(full_path("../resources/graphics/background.png")));
}

void Engine::run() {
  Clock clock;
  while (window.isOpen()) {
    Time dt = clock.restart();
    float dtAsSeconds = dt.asSeconds();
    input();
    update(dtAsSeconds);
    draw();
  }
}

