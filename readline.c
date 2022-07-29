#include "shell.h"
char* read_line() {
  
    char* buffer;
    size_t bufsize = 100;
    size_t line;

    buffer = (char*) malloc(bufsize * sizeof(char));

    if (buffer == NULL) {
        printf("Error: Unable to allocate buffer");
        exit(1);
    }

    line = getline(&buffer, &bufsize, stdin);

    return buffer;
}
