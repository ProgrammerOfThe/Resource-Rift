#ifndef ITEMS_H_
#define ITEMS_H_

#include <iostream>
// Set item health means the starting item healh, with current being what was
// being used like if it was degraded.

#include "../Inventory/inventory.cpp"

struct ItemStats {

  int setItemHealth;        // = 50;
  int setItemDamage;        // =  30;
  float setItemAttackSpeed; // = 5.6;

};

struct Mining_Items : ItemStats {

  struct PickAxe : ItemStats {

    int setHealth = setItemHealth;
    int damage = setItemDamage;
    int attackSpeed = setItemAttackSpeed;

    void unlockedPickAxe() { std::cout << "You unlocked the PickAxed \n"; }
    
    void foundPickAxe() { std::cout << "You found the pickaxe \n"; }
    
    void PickAxeLost() { std::cout << "You lost your pickaxe \n"; }
  };
};

/*
struct Farming_Items : ItemStats{

};
*/

#endif // ITEMS_H_
