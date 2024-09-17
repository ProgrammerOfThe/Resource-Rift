#ifndef ITEMS_H_  
#define ITEMS_H_

#include <iostream>
// Set item health means the starting item healh, with current being what was being used like if it was degraded.


#include "../Inventory/inventory.cpp"

struct ItemStats{
  static const int setItemHealth = 50;      
  static const int setItemDamage = 30;

  static const float setItemAttackSpeed = 5.6;
};

struct Mining_Items : ItemStats{
  struct PickAxe {
    int setHealth;
    int setDamage;
    int attackSpeed;

    PickAxe() : setHealth(setItemHealth), setDamage(setItemDamage), attackSpeed(setItemAttackSpeed) {}
    
    void unlockedPickAxe(){
      printf("You unlocked the PickAxe");
    } 

    void foundPickAxe(){
      printf("You found the PickAxe");
    }
    void PickAxeLost(){
      printf("You lost your PickAxe");      
    } 
  
  };  
};

struct Farming_Items : ItemStats{
  
};

#endif // ITEMS_H_
