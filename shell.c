#include "shell.h"
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	char *input;
	char **parsed = NULL;
	int x = 0;

	/** signal when ^C */
	signal(SIGINT, SIG_N);
	do {
		/*prompt some think to user .....*/
		write(STDOUT_FILENO, "$ ", 0);
		/** read the line commande */
		input = read_line();
		if (!input)
			exit(EXIT_SUCCESS);
		if (strcmp(input, "exit\n") == 0 || feof(stdin))
		{
			free(input);
			break;
		}
		if (input[0] == '\0' || strcmp(input, "\n") == 0)
		{
			free(input);
			continue;
		}
		/** parset  input in array of string (function)*/
		parsed = parse(input);
			if (parsed[1] != NULL)
			{
				x = atoi(parsed[1]);
				exit(x);
			}
			/** execute the parsed Commande*/
			execute(parsed);
		/*free all*/
			free(parsed);
			free(input);
		if (!isatty(STDIN_FILENO))
			exit(0);
	} while (1);
	exit(EXIT_SUCCESS);
	return (0);
}
