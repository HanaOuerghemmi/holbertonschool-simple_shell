#include "shell.h"
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	char *input;
	char **parsed;
	int x = 0;

	/*config*/
	/*loop*/
	signal(SIGINT, SIG_N);

	while (1)
	{

		/*prompt some think to user .....*/
		write(STDOUT_FILENO, "", 0);
		/*line variable to read line (function) */

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

		/*parset  input in array of string (function)*/
		parsed = parse(input);
		/*execute parset (function)*/
		execute(parsed);

		if ((strcmp(parsed[0], "exit") == 0))
		{
			if (parsed[1] != NULL)
				x = atoi(parsed[1]);
			free(parsed);
			exit(x);

		}
		/*free all (function)*/
			free(input);
			free(parsed);
		if (!isatty(STDIN_FILENO))
			exit(0);

	}
	exit(EXIT_SUCCESS);
	return (0);
}
