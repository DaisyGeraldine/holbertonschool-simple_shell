#include "shell.h"
/**
 * main - C - Simple Shell
 * @ac : argument count
 * @av : argument vector
 * Description: function main for SimpleShell
 * Return: always
 */
int main(int ac __attribute__((unused)), char **av)
{
	char *line = NULL, *delims = {" \n"}, *arg_0 = NULL;
	char **args = NULL;
	/*int ret = 0;*/

	signal(SIGINT, sig_handler);
	while (1)
	{
		line = shell_read_line();
		if (strcmp(line, "env\n") == 0)
		{
			print_env();
			free(line);
			continue;
		}
		if (strcmp(line, "exit\n") == 0)
		{
			free(line);
			exit(0);
		}
		args = shell_split_line(line, delims, ' ');

		if (line[0] != '/')
		{
			arg_0 = search_execute(args[0]);
			free(args[0]);
			args[0] = NULL;
			args[0] = arg_0;
			arg_0 = NULL;
		}
		create_child(line, args, av);

		/*if (ret == 0)*/
		/*return (ret);*/
			/*_exit(0);*/
		/*return (ret);*/
	}
	/*free_arg(args);*/
	/*free(line);*/
	return (0);
}
