
#include "shell.h"
/**
 * parse - function that parse the input into in array of string
 * @input: the input to parsed
 * Return: Array of string
 */
char **parse(char *input)
{
	int length = 0;
	int capacity = 1024;
	char **tokens = malloc(capacity * sizeof(char *));

	char *delimiters = " \t\r\n";
	char *token = strtok(input, delimiters);

	while (token != NULL)
	{
		tokens[length] = token;
		length++;

		if (length >= capacity)
		{
		/** capacity = (int) (capacity * 1.5);*/
			tokens = realloc(tokens, capacity * sizeof(char *));
		}

		token = strtok(NULL, delimiters);
	}
	tokens[length] = NULL;
	return (tokens);
}
