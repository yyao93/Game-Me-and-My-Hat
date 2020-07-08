#ifndef WEAPON_KATANA_H
#define WEAPON_KATANA_H

#include "Weapon.h"
#include "Player_2.h"

class Weapon_Katana : public Weapon {
public:
  Weapon_Katana();
  void virtual spawn(Player_2 player_2);
  void virtual update(Player_2 player_2);
};

#endif
