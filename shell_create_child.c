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
	pid_t parent;
	int status = 0;
	char  wpid;
	(void)wpid;
	parent = fork();

	if (parent == 0)
	{
		if (execve(_args[0], _args, NULL) == -1)
		{
			printf("%s: No such file or directory\n", _av[0]);
			free_arg(_args);
			free(_line);
			return (0);
		}
		exit(EXIT_FAILURE);
	}
	else if (parent < 0)
	{
		printf("%s: No such file or directory\n", _av[0]);
		return (0);
	}
	else
	{
		/*wait(&status);*/
		do {
			wpid = waitpid(parent, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	free_arg(_args);
	free(_line);
	return (1);
}
