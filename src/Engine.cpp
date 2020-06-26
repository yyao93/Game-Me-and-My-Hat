#include "../include/Engine.h"

Engine::Engine() {
  // Get the screen resolution and create an SFML window and View
  Vector2f resolution;
  resolution.x = VideoMode::getDesktopMode().width;
  resolution.y = VideoMode::getDesktopMode().height;
  m_window.create(VideoMode(resolution.x, resolution.y), "Me2D");
  // Initialize the views
  m_MainView.setSize(resolution);
  m_LeftView.setViewport(FloatRect(0.001f, 0.001f, 0.498f, 0.998f));
  m_RightView.setViewport(FloatRect(0.5f, 0.001f, 0.499f, 0.998f));
  // Now set m_BackgroundSprite, m_BackgroundTexture
  // I need to change the following soon
  m_BackgroundTexture = TextureHolder::GetTexture(full_path("../resources/graphics/background.png"));
  m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::run() {
  // Timing
  Clock clock;
  while (m_window.isOpen()) {
    Time dt = clock.restart();
    m_GameTimeTotal += dt;
    float dtAsSeconds = dt.asSeconds();
    input();
    update(dtAsSeconds);
    draw();
  }

}
