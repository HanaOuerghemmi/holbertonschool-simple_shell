#ifndef _SHELL_H_
#define _SHELL_H_


#define BUFSIZE 1024
#define DELIM " \t\r\n\a"
#define PRINTER(c) (write(STDOUT_FILENO, c, _strlen(c)))


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<string.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<signal.h>
#include <sys/wait.h>
#include <unistd.h>






extern char **environ;

char *read_line();
char **split_line(char *line);
void exec(char **args);
int num_builtins();
void kash_cd(char **args); 
void kash_exit(__attribute__ ((unused)) char **args);
void kash_help(__attribute__ ((unused)) char **args);


struct builtin {
    char *name;
    void (*func)(char **args);
};

// Array of built in commands.






#endif
