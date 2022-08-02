#include "shell.h"
/**
 * sh_exit- function exit
 * @args: the argument
 */
void sh_exit(__attribute__ ((unused)) char **args)
{
	exit(0);
}
/**
 * sh_cd - function cd
 * @args: the argument
 */
void sh_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "shell: cd: missing argument\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("shell: cd");
		}
	}
}

/**
 * sh_help - function help
 * @args: the argument
 */
void sh_help(__attribute__ ((unused)) char **args)
{
	char *helptext =
		"shell - the Shell. "

		"The following commands are built in:\n"
		"  cd       Change the working directory.\n"
		"  exit     Exit the shell.\n"
		"  help     Print this help text.\n"
		;
	printf("%s", helptext);
}
/**
 * _free_tokens - function that free all elment in the tokens
 * @token: the array to freed
 */
void _free_tokens(char **token)
{
	int i;

	for (i = 0; token[i] != NULL; i++)
	{
		free(token[i]);
	}
	free(token);
}
