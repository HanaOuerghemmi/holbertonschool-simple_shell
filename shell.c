#include "shell.h"
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	char *input;
	char **parsed;

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
			break;
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

		/*free all (function)*/
        	free(parsed);
			free(input);	


	}
	/*free all (function)*/
	exit(EXIT_SUCCESS);
	

	return (0);
}
