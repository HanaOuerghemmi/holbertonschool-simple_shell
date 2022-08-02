#include "shell.h"




void kash_exit(__attribute__ ((unused)) char **args) {
    exit(0);
}

void kash_cd(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "shell: cd: missing argument\n");
    } else {
        if (chdir(args[1]) != 0) {
            perror("shell: cd");
        }
    }
}

void kash_help(__attribute__ ((unused)) char **args) {
    char *helptext =
        "shell - the Shell. "
        "The following commands are built in:\n"
        "  cd       Change the working directory.\n"
        "  exit     Exit the shell.\n"
        "  help     Print this help text.\n"
        ;
    printf("%s", helptext);
}

