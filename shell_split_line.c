#include "shell.h"
/**
 * shell_split_line - C - Simple Shell
 * @line : buffer to tokenize
 * @delims : delimiter characters
 * @sep : separator
 * Description: store argument string
 * Return: string double arrays
 */
char **shell_split_line(char *line, char *delims, char sep)
{
	int i = 0, n = 0;
	char **args = NULL;
	char *token = NULL;

	n = separator_counter(line, sep);
	args = malloc((n + 1) * sizeof(char *));
	if (line[0] == '\n')
	{
		args[0] = strdup("\n");
		args[1] = NULL;
	}
	else
	{
		if (args == NULL)
		{
			/*free(line);*/
			/*free_arg(args);*/
			return (NULL);
		}
		token = strtok(line, delims);
		i = 0;
		while (token != NULL)
		{
			args[i] = strdup(token);
			if (args[i] == NULL)
			{
				/*free_arg(args);*/
				return (NULL);
			}
			token = strtok(NULL, delims);
			i++;
		}
		args[i] = NULL;
	}
	return (args);
}
