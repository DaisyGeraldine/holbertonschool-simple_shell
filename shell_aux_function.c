#include "shell.h"
/**
 * sig_handler - C - Simple Shell
 * @signo : "argument count"
 * Description: signal Ctrl + D
 * Return: nothing
 */
void sig_handler(int signum)
{
	if (signum == SIGINT)
	{
		write(1, "\n#cisfun$ ", 10);
	}
}
/**
 * separator_counter - C - Simple Shell
 * @line : buffer to count
 * @sep : separator
 * Description: count separator of the string
 * Return: string double arrays
 */
int separator_counter(char *line, char sep)
{
	int n = 0, i = 0;

	while (line[i])
	{
		if (line[i] == sep)
			n++;
		i++;
	}
	n++;

	return (n);
}
/**
 * validate_spaces - Validate spaces, tabs and line breaks
 * @input: String from input
 * Return: 0 if not find spaces, tabs or line break
 */
int validate_spaces(char *input)
{
	int i = 0, flag = 1, len = 0;

	len = strlen(input);

	while (input[i] == ' ' || input[i] == '\n' || input[i] == '\t')
		i++;

	if (i != len)
		flag = 0;
	return (flag);
}
