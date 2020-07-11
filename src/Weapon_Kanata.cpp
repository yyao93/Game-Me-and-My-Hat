#include "../include/Weapon_Katana.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

Weapon_Katana::Weapon_Katana() {
  wSprite = Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/katana.png")));
}
