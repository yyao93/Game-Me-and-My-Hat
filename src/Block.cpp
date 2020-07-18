#include "../include/Block.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

Block::Block() {
  bSprite = Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/Brick.png")));
  bSprite.setPosition(bPos);
}

void Block::update() {
  bSprite.setPosition(bPos);
}
