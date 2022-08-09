#include "shell.h"
/**
 * shell_read_line - C - Simple Shell
 * Description: read line
 * Return: string
 */
char *shell_read_line(void)
{
	char *line = NULL;
	size_t len = 0, st_isatty = 0;
	ssize_t read = 0;

	st_isatty = isatty(STDIN_FILENO);
	if (st_isatty == 1)
		write(1, "#cisfun$ ", 9);

	/*signal(SIGINT, sig_handler);*/
	read = getline(&line, &len, stdin);

	if (read == EOF)
	{
		printf("\n");
		free(line);
		exit(EXIT_FAILURE);
	}
	return (line);
}
