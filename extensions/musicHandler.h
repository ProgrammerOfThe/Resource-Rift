#ifndef MUSICHANDLER_H
#define MUSICHANDLER_H

#include <stdlib.h>
#include <stdio.h>

int musicPlayer(){
  
  int returnValue = system("cd ./../Music/");

  if(returnValue == NULL){
    returnValue = system("afplay JustChillnByItsArkon_170copy.mp3 &");
  }else{
    perror("couldn't cd into directory");
  }
  return 0;  
}

#endif
