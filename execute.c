#include"shell.h"
/**
 * exec_cmd - function execute the commande
 * @cmd: the commande to execute
 */
void exec_cmd(char **cmd)
{
	pid_t	pid = 0;
	int		status = 0;


	pid = fork();
	if (pid == -1)
		perror("fork");
	/*Si le fork a reussit, le processus pere attend l'enfant (process fork)*/
	else if (pid > 0)
	{
		/* On block le processus parent jusqu'a ce que l'enfant termine puis */
		/* on kill le processus enfant */
		waitpid(pid, &status, 0);
		kill(pid, SIGTERM);
	}
	else
	{
		/* Le processus enfant execute la commande ou exit si execve echoue */
		if (execve(cmd[0], cmd, NULL) == -1)
			perror("shell");
		exit(EXIT_FAILURE);
	}
}

