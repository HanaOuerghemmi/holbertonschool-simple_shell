#include "shell.h"
/**
 * execute - function that execute the commande
 * @args: the command
 */
void execute(char** args) 
{
pid_t child_pid = fork();
	if (strcmp(args[0], "cd") == 0) 
	{

		chdir(args[1]);
		printf("Changing directories to: %s\n", args[1]);

	} 
	else if ((strcmp(args[0], "quit") == 0)) 
	{

		printf("Quitting\n");
		exit(0);

	} 
	else 
	{

		if (child_pid == 0) 
		{

			int status_code = execvp(args[0], args);

			if (status_code == -1) 
			{
			/*	printf("Error: Your command terminated incorrectly\n");*/
				exit(1);
			}

		}

	}

}

