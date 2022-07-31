#include "shell.h"
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	char *input;
	char **parsed = NULL;
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
	if (strcmp(input, "env\n") == 0)
		{
			print_env();
			free(input);
			continue;
		}

		/** parset  input in array of string (function)*/
		parsed = parse(input);
	
						/** execute the parsed Commande*/
			execute(parsed);
				/*free all*/
			_free_parsed(parsed);
				free(input);
			} while (1);
	exit(EXIT_SUCCESS);
	return (0);
}
/**
 * _free_parsed - function that free all elment in the array
 * @arr: array 
 */
void _free_parsed(char **arr)
{
	int i;

	for (i = 0; arr[i] != NULL; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
