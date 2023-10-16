#include "shell.h"
/**
 * print_env - print the environment variables
 *
 * the function print the env
 */
void print_env(void)
{
	int j;
	char **env = environ;

	for (j = 0; env[j]; j++)
	{
		write(STDOUT_FILENO, env[j], _strlen(env[j]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
