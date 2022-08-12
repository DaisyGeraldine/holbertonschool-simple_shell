#include "shell.h"
/**
 * create_child - C - Simple Shell
 * @_line : received buffer
 * @_args : buffer arguments
 * @_av : argument vector
 * Description: signal Ctrl + D
 * Return: nothing
 */
void create_child(char *_line, char **_args, char **_av)
{
	pid_t parent;
	int status = 0;

	parent = fork();

	if (!parent)
	{
		if (execve(_args[0], _args, NULL) == -1)
		{
			printf("%s: No such file or directory\n", _av[0]);
			free_arg(_args);
			free(_line);
			/*return (1);*/
			exit(EXIT_FAILURE);
		}
	}
	else if (parent < 0)
	{
		perror("process error");
		free(_args);
		free(_line);
		/*return (1);*/
	}
	else
	{
		/*wait(&status);*/
		waitpid(-1, &status, 0);
		if (WIFEXITED(status))
			WEXITSTATUS(status);
		/*return (1);*/
	}
	free_arg(_args);
	free(_line);
	/*return (0);*/
	/*return (1);*/
}
