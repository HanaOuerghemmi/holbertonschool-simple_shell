#include "shell.h"
/**
 * main - program main of the shell
 * Return: 0
 */
int main(void)
{

	char *line;
	char **tokens;

	signal(SIGINT, SIG_N);
	while (true)
	{
		/*  printf("$ ");*/
		line = read_line();
		tokens = split_line(line);


		if (tokens[0] != NULL)
		{
			exec(tokens);
		}

		free(tokens);
		free(line);
	}
	return (0);
}

