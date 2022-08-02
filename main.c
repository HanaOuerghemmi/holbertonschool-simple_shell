#include "shell.h"
int main() {
	
	char *line;
	char **tokens;

    while (true) {
      /*  printf("$ ");*/
        line = read_line();
        tokens = split_line(line);

        if (tokens[0] != NULL) {
            exec(tokens);
        }

        free(tokens);
        free(line);
    }
	return (0);
}

