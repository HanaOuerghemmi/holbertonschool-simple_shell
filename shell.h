#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<signal.h>
#include <sys/wait.h>
#include <unistd.h>

char** parse(char* input) ;
char*  read_line(); 
void prompt();
void execute(char** args); 
void SIG_N(int signal);




#endif
