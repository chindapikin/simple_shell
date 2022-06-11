#include "shell.h"

/**
 * execution - is a function that executes commands entered by usrs
 * @cp: command
 * @cmd: array of pointers to commands
 * Return: Always 0
 */

void execution(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
	{
		perror(cp);
	}
	else if (child_pid == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		free_buffers(cmd);
		exit(98);
	}
	else
	{
		wait(&status);
	}
}
