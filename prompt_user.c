#include "shell.h"

/**
* prompt_user - prints cisfun$ to let user know the program is ready
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
