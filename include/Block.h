#ifndef BLOCK_H
#define BLOCK_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Block {
private:
  Sprite bSprite;
  Vector2f bPos;
public:
  Block();
  Sprite getSprite() {return bSprite;};
  void setPosition(Vector2f pos) {bPos = pos;};
  FloatRect getBoundary() {return bSprite.getGlobalBounds();};
  void update();
};

#endif
