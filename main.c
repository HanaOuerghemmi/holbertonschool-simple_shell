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
		/**  printf("$ ");*/
		/** read line commande */
		line = read_line();
		/** parse the line in arry of string*/
		tokens = split_line(line);

		/** execute the line*/
		if (tokens[0] != NULL)
		{
			exec(tokens);
		}
		/** free all */
		free(tokens);/**_free_tokens(tokens)*/
		free(line);
	}
	exit(EXIT_SUCCESS);
	return (0);
}

