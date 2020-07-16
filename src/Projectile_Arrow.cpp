#include "../include/Projectile_Arrow.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

Projectile_Arrow::Projectile_Arrow() {
  pSprite = Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/Arrow.png")));
  pSpeed = 1500;
  pRange = 1500;
  pFireRate = 2;
}
