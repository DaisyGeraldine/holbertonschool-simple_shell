#include "shell.h"
/**
 * free_arg - C - Simple Shell
 * @arg : buffer
 * Description: free array buffer
 * Return: 0
 */
void free_arg(char **arg)
{
	size_t i = 0;

	if (arg == NULL)
	{
		return;
	}

	while (arg[i])
	{
		free(arg[i]);
		i++;
	}

	if (arg[i] == NULL)
	{
		free(arg[i]);
	}

	free(arg);
}
