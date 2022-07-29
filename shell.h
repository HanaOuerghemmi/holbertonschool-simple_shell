#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
char** parse(char* input) ;
char*  read_line(); 
void prompt();
void execute(char** args); 





#endif
