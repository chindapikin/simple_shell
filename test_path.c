#include "shell.h"

/**
* test_path - checks whether path is valid
* @path: tokenized path
* @command: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *test_path(char **path, char *command)
{
	int x = 0;
	char *display;

	while (path[x])
	{
		display = append_path(path[x], command);
		if (access(display, F_OK | X_OK) == 0)
		{
			return (display);
		}
		free(display);
		x++;
	}
	return (NULL);
}
