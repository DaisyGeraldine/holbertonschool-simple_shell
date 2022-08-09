#include "shell.h"
/**
 * sig_handler - C - Simple Shell
 * @signo : "argument count"
 * Description: signal Ctrl + D
 * Return: nothing
 */
void sig_handler(int signo)
{
	if (signo == SIGINT)
	{
		return;
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
