#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <iostream>

#define ROWS (4 * 6)

struct Inventory {
    int inventoryRows = 4;
    std::string inventorySize[ROWS]; // Fixed array size
};

void printInventory(const std::string inventory[ROWS], int rows) {
    std::cout << "Inventory: \n" << std::endl;
    for (int i = 0; i < rows; i++) {
        std::cout << inventory[i] << std::endl;
    }
}

#endif
