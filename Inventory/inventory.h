#ifndef INVENTORY_H
#define INVENTORY_H

#define ROWS (4 * 6)

#include <stdio.h>
#include <stdlib.h>

struct Inventory {
  int inventoryRows;
  char* inventorySize[ROWS]; // Fixed array size
};

void printInventory(char* inventory[ROWS], int rows) {
  printf("Inventory:\n");
  for (int i = 0; i < rows; i++) {
    printf("%s\n", inventory[i]);
  }
}

#endif
