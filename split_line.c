#include "shell.h"



char **split_line(char *line) {
    int length = 0;
    int capacity = 16;
 char *delimiters ;
    char *token ;

    char **tokens = malloc(capacity * sizeof(char*));
    if (!tokens) {
        perror("shell");
        exit(1);
    }

    delimiters = " \t\r\n";
    token = strtok(line, delimiters);

    while (token != NULL) {
        tokens[length] = token;
        length++;

        if (length >= capacity) {
            capacity = (int) (capacity * 1.5);
            tokens = realloc(tokens, capacity * sizeof(char*));
            if (!tokens) {
                perror("shell");
                exit(1);
            }
        }

        token = strtok(NULL, delimiters);
    }

    tokens[length] = NULL;
    return tokens;
}

