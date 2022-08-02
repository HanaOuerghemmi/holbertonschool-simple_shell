#include "shell.h"
/**
 * SIG_N - functio signal handler
 * @signal  : input
 */
void SIG_N(int signal)
{
	if (signal == SIGINT)
	{
		putchar('\n');
			write(STDOUT_FILENO, "$ ", 2);

	}
}
