#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "inventory.h"
#include "../libs/foreach.h"

int main() {
  int rows;
  struct Inventory inventory;
  rows = inventory.inventoryRows;

  for (int i = 0; i < rows; i++) {
    inventory.inventorySize[i] = malloc(100 * sizeof(char)); // Allocate memory for each row
  }

  // Populate the inventory with new item names
  strcpy(inventory.inventorySize[0], "Pickaxe");
  strcpy(inventory.inventorySize[1], "Axe");
  strcpy(inventory.inventorySize[2], "Shovel");
  strcpy(inventory.inventorySize[3], "hoe");

  printInventory(inventory.inventorySize, rows);
  
  for (int i = 0; i < rows; i++) {
    free(inventory.inventorySize[i]);
  
  }
  // FOREACH(VAR, ARRAY): THIS DOES NOT WORK
  return 0;
}
