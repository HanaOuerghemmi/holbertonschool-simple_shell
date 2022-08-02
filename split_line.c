#include "shell.h"
/**
 * split_line - function taht split the input in an array of string
 * @line: the input
 * Return: array of string
 */
char **split_line(char *line)
{
	int length = 0;
	int capacity = 16;
	char *delimiters;
	char *token;
	char **tokens = malloc(capacity * sizeof(char *));

	if (!tokens)
	{
		perror("shell");
		exit(1);
	}

	delimiters = " \t\r\n";
	token = strtok(line, delimiters);
/** Returns pointer to the first token found in line.null ptr if no tokens*/
	while (token != NULL)
	{
		tokens[length] = token;
		length++;

		if (length >= capacity)
		{
			capacity = (int) (capacity * 1.5);
			tokens = realloc(tokens, capacity * sizeof(char *));
			if (!tokens)
			{
				perror("shell");/**prints a descriptive error*/
				exit(1);
			}
		}

		token = strtok(NULL, delimiters);
	}

	tokens[length] = NULL;
	return (tokens);
}

