#include "shell.h"
/**
 * search_execute - C - Simple Shell
 * @exe : string executable to search in the path
 * Description: search in the path th file to execute
 * Return: path the file
 */
char *search_execute(char *exe)
{
	char *path = NULL, *delims = {":\n"}, *concat_path = NULL;
	char **list_path = NULL;
	size_t i = 0, len_line = 0;
	struct stat st;

	path = get_path();
	list_path = shell_split_line(path, delims, ':');
	free(path);
	while (list_path[i])
	{
		len_line = (strlen(exe));
		concat_path = malloc((strlen(list_path[i]) + len_line + 2) * sizeof(char));
		strcpy(concat_path, list_path[i]);
		strcat(concat_path, "/");
		strcat(concat_path, exe);
		if (stat(concat_path, &st) == 0)
		{
			break;
		}
		free(concat_path);
		concat_path = strdup(exe);
		i++;
	}
	free_arg(list_path);
	return (concat_path);

}
/**
 * get_path - C - Simple Shell
 * Description: get the path in one string
 * Return: path
 */
char *get_path()
{
	char *search_path = NULL, *path_value = NULL;
	size_t i = 0;

	while (environ[i])
	{
		path_value = malloc(5);
		strncpy(path_value, environ[i], 4);
		if (strcmp(path_value, "PATH") == 0)
		{
			free(search_path);
			search_path = strdup(environ[i]);
			break;
		}
		i++;
	}
	free(path_value);
	return (search_path);
}
/**
 * print_env - C - Simple Shell
 * @void : empty
 * Description: prints the current environment
 * Return: nothing
 */
void print_env(void)
{
	size_t i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
