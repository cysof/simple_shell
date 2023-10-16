#include "shell.h"
/**
 * _getenv - the get env function get the value of environment
 * @name: the name of the enviorment variable
 * Return: A pointer will be return
 */
char *_getenv(const char *name)
{
	int j, len;
	char **env;
	char *value;

	if (!name)
		return (NULL);
	env = environ;
	for (j = 0; env[j]; j++)
	{
		for (len = 0; env[j][len] != '='; len++)
			;
		if (_strncmp(name, env[j], len) == 0)
		{
			value = &env[j][len + 1];
			return (value);
		}
	}
	return (NULL);
}
