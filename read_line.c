
#include "shell.h"


char *read_line() {
    char *line = NULL;
    size_t buflen = 0;
    ssize_t strlen;
	
    int errno = 0;

	strlen = getline(&line, &buflen, stdin);
    if (strlen < 0) {
        if (errno) {
            perror("shell");
        }
		free(line);
        exit(0);
    }
    return line;
}
