#include <iostream>
#include <string>

#include "inventory.hpp"

int Inventory_Handler() {
    int rows = 4; // Set the number of rows
    std::string emptyArray = "";
    Inventory inventory;

    // Populate the inventory with new item names using raw pointers
    inventory.inventorySize[0] = std::string("Pickaxe");
    inventory.inventorySize[1] = std::string("Axe");
    inventory.inventorySize[2] = std::string("Shovel");
    inventory.inventorySize[3] = std::string("Hoe");

    printInventory(inventory.inventorySize, rows);

    // Clearing the inventorySize array and deallocating memory
    for (int i = 0; i < rows; i++) {
        emptyArray = inventory.inventorySize[i];
    }

    // FOREACH(VAR, ARRAY): THIS DOES NOT WORK

    return 0;
}


namespace inventoryTestBuild{
    int main(){
        Inventory_Handler();
        
        return 0;
    }    
}
