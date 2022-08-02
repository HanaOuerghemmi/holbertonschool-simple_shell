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

char **parse(char *input) ;
char *read_line(); 
void prompt(void);
void execute(char **args); 
void SIG_N(int signal);
void print_env(void); 
void _free_parsed(char **arr);
void prompt(void);




#endif
