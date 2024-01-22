#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

#define ITEMS_H_INCLUDED
#include "items.h"

#include "../extensions/macro.h"

bool ItemReader(){
  
  #ifndef ITEMS_H_INCLUDED
    FILE *itemsFile;
    itemsFile = fopen("items.txt", "r");

    if (itemsFile != NULL){
      return 1;
    }else{
      return exit(EXIT_FAILURE);
    }

  #else
    printf("%d include error(%s)", INCLUDE_ERROR, SYS);  
  #endif 
    
  return true; 
}
