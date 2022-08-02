#include <string.h>
#include "shell.h"
/**
 * print_error - Display Errors and How Many Time Shell Loopes
 * @input: Input
 * @counter: Count Loop
 * @argv: Program name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	PRINTER(argv[0]);
	PRINTER(": ");
	er = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}