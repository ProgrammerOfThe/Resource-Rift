#include <iostream>
#include <fstream>

#define ITEMS_HPP_INCLUDED

#include "items.hpp"

#include "../extensions/macro.h"

bool ItemReader(){

  #ifndef ITEMS_H_INCLUDED
    FILE *itemsFile;
    itemsFile = fopen("items.txt", "r");

    if (itemsFile != NULL){
      return false;
    }else{
      return 1;
    }

  #else
    printf("%d include error(%s)", INCLUDE_ERROR, SYS);
  #endif

  return true;
}
