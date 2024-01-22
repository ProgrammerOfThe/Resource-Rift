#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
#include <string.h>

#include "../Assets/items.c"
#include "../Assets/items.h"
#include "../Music/musicHandler.c"

int main(){
    int quit = 0;

    
    const char* fileName = __FILE__;
    
    // Extract the last directory from the path
    const char* lastDirectory = strrchr(fileName, '/');
    if (lastDirectory != NULL) {
        lastDirectory++; // Increment the pointer to skip the slash
    }
    
    // Use the last directory in the system() function
    char command[COMMAND_LENGTH];
    sprintf(command, "time %s", lastDirectory);
    system(command);

    musicPlayer();
        
    /* This is cursed
    
    while(!quit){
        printf("Program is running");
        
    }
    */
}

