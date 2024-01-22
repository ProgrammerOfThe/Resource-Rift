#include <stdlib.h>
#include <stdio.h>

int musicPlayer() {
    const char* filePath = "JustChillnByItsArkon_170copy.wav";
    const char* command = "afplay";

    // Construct the command with the file path
    char fullCommand[1000];
    snprintf(fullCommand, sizeof(fullCommand), "%s %s", command, filePath);

    // Use system() to execute the command
    int returnValue = system(fullCommand);

    if (returnValue == -1) {
        perror("Error occurred while playing the song");
    }
    return 0;
}
