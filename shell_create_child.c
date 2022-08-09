#include "shell.h"
/**
 * create_child - C - Simple Shell
 * @_line : received buffer
 * @_args : buffer arguments
 * @_av : argument vector
 * Description: signal Ctrl + D
 * Return: nothing
 */
int create_child(char *_line, char **_args, char **_av)
{
	pid_t parent = 0;
	int status = 0;

	parent = fork();
	if (!parent)
	{
		if (execve(_args[0], _args, NULL) == -1)
		{
			printf("%s: No such file or directory", _av[0]);
			free_arg(_args);
			free(_line);
			return (1);
		}
	}
	else
	{
		wait(&status);
	}
	free_arg(_args);
	free(_line);
	return (0);
}
