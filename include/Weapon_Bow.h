#ifndef WEAPON_BOW_H
#define WEAPON_BOW_H

#include "Weapon.h"
#include "Player_1.h"

class Weapon_Bow : public Weapon {
public:
  Weapon_Bow();
  void virtual spawn(Player_1 player_1);
  void virtual update(Player_1 player_1);
};

#endif
