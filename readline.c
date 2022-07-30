#include "shell.h"
/**
 * read_line - function that read the line of the input
 * Return: input char*
 */
char *read_line()
{

	char *buffer;
	size_t bufsize = 100;
	size_t line;

	buffer = (char *) malloc(bufsize * sizeof(char));

	if (buffer == NULL)
	{
		printf("Error: Unable to allocate buffer");
		exit(1);
	}

	line = getline(&buffer, &bufsize, stdin);

	if (!line)
		return (NULL);

	return (buffer);
}
