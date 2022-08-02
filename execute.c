#include"shell.h"
/**
 * exec - function execute the commande
 * @args: the commande to execute
 */

void exec(char **args)
{
	int i;
	pid_t child_pid;
	int status;
	builtin builtins[] = {
	{"help", sh_help},
	{"exit", sh_exit},
	{"cd", sh_cd},
};

int num_builtins = sizeof(builtins) / sizeof(struct builtin);

	for (i = 0; i < num_builtins; i++)
	{
		if (strcmp(args[0], builtins[i].name) == 0)
		{
			builtins[i].func(args);
			return;
		}
	}

	child_pid = fork();

	if (child_pid == 0)
	{
		execvp(args[0], args);
		perror("shell");
		exit(1);
	}
	else if (child_pid > 0)
	{
		do {

			waitpid(child_pid, &status, WUNTRACED);

		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	else
	{
		perror("shell");
	}
}

