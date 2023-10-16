#include "shell.h"
/**
 * get_path - function to get path from
 * user input
 * @command: command from user input
 * Return: Return NULL
 */
char *get_path(char *command)
{
	char *comp_path, *path, *path_env = _getenv("PATH");
	size_t path_len, comp_path_len, command_len;

	if (path_env == NULL)
	{
		return (NULL);
	}
	path = strtok(path_env, ":");
	while (path != NULL)
	{
		path_len = _strlen(path);
		command_len = _strlen(command);
		comp_path_len = path_len + command_len + 2;
		comp_path = malloc(comp_path_len);
		if (comp_path == NULL)
		{
			perror("malloc");
			return (NULL);
		}
		_strcpy(comp_path, path);
		comp_path[path_len] = '/';
		_strcpy(comp_path + path_len + 1, command);

		if (access(comp_path, X_OK) == 0)
		{
			return (comp_path);
		}
		free(comp_path);
		path = strtok(NULL, ":");
	}
	return (NULL);
}
