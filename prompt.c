#include "shell.h"
/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
