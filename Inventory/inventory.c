#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "inventory.h"

int main() {
  struct Inventory inventory;

  int rows = 4;
  inventory.inventoryRows = rows;

  for (int i = 0; i < rows; i++) {
    inventory.inventorySize[i] = malloc(100 * sizeof(char)); // Allocate memory for each row
  }

  // Populate the inventory with new item names
  strcpy(inventory.inventorySize[0], "Pickaxe");
  strcpy(inventory.inventorySize[1], "Axe");
  strcpy(inventory.inventorySize[2], "Shovel");
  strcpy(inventory.inventorySize[3], "Hammer");

  printInventory(inventory.inventorySize, rows);

  // Free allocated memory
  for (int i = 0; i < rows; i++) {
    free(inventory.inventorySize[i]);
  }

  return 0;
}
