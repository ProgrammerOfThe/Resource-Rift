#ifndef ITEMS_H_  
#define ITEMS_H_

// Set item health means the starting item healh, with current being what was being used like if it was degraded.


#include "../Inventory/inventory.c"

struct ItemStats{
  const int setItemHealth = 50;      
  const int setItemDamage = 30;

  const float setItemAttackSpeed = 5.6;
};

struct Mining_Items : ItemStats{
  struct PickAxe {
    int *setHealth = setItemHealth;
    int *damage = setItemDamage;
    int *attackSpeed = setItemAttackSpeed;
    
    void unlockedPickAxe(){

      printf("You unlocked the PickAxed");
            
    } 

    void foundPickAxe(){
      printf("You found the pickaxe");
    }
    void PickAxeLost(){
      printf("You lost your pickaxe ");      
    } 
  
  };  
};

struct Farming_Items : ItemStats{
  
};

#endif // ITEMS_H_
