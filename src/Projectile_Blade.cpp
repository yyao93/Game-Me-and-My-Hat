#include "../include/Projectile_Blade.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

Projectile_Blade::Projectile_Blade() {
  pSprite = Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/Blade.png")));
  pSpeed = 1000;
  pRange = 800;
  pFireRate = 1;
}
