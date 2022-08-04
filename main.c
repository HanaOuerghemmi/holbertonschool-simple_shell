#include "shell.h"
/**
 * main - program main of the shell
 * Return: 0
 */
int	main(void)
{
	char	*buffer = NULL;
	size_t	buf_size = 2048;
	char **cmd;

	buffer = (char *)calloc(sizeof(char), buf_size);
	if (buffer == NULL)
	{
		perror("Malloc failure");
		return (EXIT_FAILURE);
	}

	signal(SIGINT, SIG_N);

	while (getline(&buffer, &buf_size, stdin) > 0) 
	{
		cmd = split(buffer, " \t\r\n");
		get_absolute_path(cmd);

		if (cmd[0] == NULL)
			printf("Command not found\n");
		else
			exec_cmd(cmd);

		free_array(cmd);

	}

	free(buffer);
	exit(EXIT_SUCCESS);
	return (0);
	}

