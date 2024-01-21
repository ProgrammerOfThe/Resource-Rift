#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

#define ITEMS_H_INCLUDED

#include "items.h"
bool ItemReader(){
  
  #ifndef ITEMS_H_INCLUDED
    FILE *itemsFile;
    itemsFile = fopen();

    if (itemsFile != NULL){
      return 1;
    }else{
      return exit(EXIT_FAILURE);
    }
  #endif   
  return true; 
}
