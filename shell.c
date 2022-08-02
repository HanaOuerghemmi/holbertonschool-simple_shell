#include "shell.h"

/**
 * _free_parsed - function that free all elment in the array
 * @parse: array of string 
 */
void _free_parsed(char **parse)
{
	int i;

	for (i = 0; parse[i] != NULL; i++)
	{
		free(parse[i]);
	}
	free(parse);
}
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
	/*	write(STDIN_FILENO, "$ ", 2);*/
		printf("$ ");
		fflush(stdin);
		/** read the line commande */
		input = read_line();
		if (!input)
			continue;
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
/** execute the parsed Commande*/
			execute(parsed);

		/*free all*/
			_free_parsed(parsed);
			free(input);
	} while (1);
	exit(EXIT_SUCCESS);
	return (0);
}

