#include "shell.h"

/**
 * main - is a function that creates a simple UNIX command Interpreter
 * @argc: argument count
 * @argv: argument vector
 * @envp: environment vector
 * Return: Always 0.
 */

int main(int argc, char **argv, char *envp[])
{
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	ssize_t linesize = 0;
	size_t bufsize = 0;
	int status =  1;
	char **command = NULL, **paths = NULL;
	(void)argv;
	(void)envp;
	if (argc < 1)
		return (-1);
	signal(SIGINT, handle_signal);
	while (status)
	{
		free_buffers(command);
		free_buffers(paths);
		free(pathcommand);
		prompt_user();
		linesize = getline(&line, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		command = tokenizer(line);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (checker(command, line))
			continue;
		path = find_path();
		paths = tokenizer(path);
		pathcommand = test_path(paths, command[0]);
		if (!pathcommand)
			perror(argv[0]);
		else
			execution(pathcommand, command);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line);
	return (0);
}
