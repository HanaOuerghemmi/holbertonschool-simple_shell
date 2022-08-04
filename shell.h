#ifndef _SHELL_H_
#define _SHELL_H_

#define BUFSIZE 1024

/**
 * struct - builtin
 */

typedef struct builtin
{
	char *name;
	void (*func)(char **args);
} builtin;


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
void sh_cd(char **args);
void sh_exit(__attribute__ ((unused)) char **args);
void sh_help(__attribute__ ((unused)) char **args);
void SIG_N(int signal);

char **split(char *raw_cmd, char *limit);
void exec_cmd(char **cmd);
void get_absolute_path(char **cmd);
void	free_array(char **array);
void print_env(void);








#endif
