#include "../include/Weapon_Bow.h"
#include "../include/TextureHolder.h"
#include "../include/fullpath.h"

Weapon_Bow::Weapon_Bow() {
  wSprite = Sprite(TextureHolder::GetTexture(full_path("../resources/graphics/bow.png")));
}
