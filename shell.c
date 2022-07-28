#include "shell.h"
#include <stdio.h>
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	char buffer[32];
	char *b = buffer;
	size_t bufferSize = 32;
	size_t line;
	char *promp = "$ ";

/*config*/
	/*loop*/
	while (1)
	{
		write(2, promp, 2);

		line = getline(&b, &bufferSize, stdin);

		printf("%s", b);
		/*line variable to read line (function) */
		/*parset  input in array of string (function)*/
		/*execute parset (function)*/
	}
	/*free all (function)*/

	return (0);
}
