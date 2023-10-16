#include "shell.h"
/**
 * execute_child_process - excute a command in child process
 * @command: command to execute
 * @args: arguments
 */
void execute_child_process(char *command, char *args[])
{
	char *path = get_path(command);

	if (path != NULL)
	{
		if (execve(path, args, NULL) == -1)
		{
			perror("execve");
			_exit(EXIT_FAILURE);
		}
	}
	else if (access(command, X_OK) == 0)
	{
		if (execve(command, args, NULL) == -1)
		{
			perror("execve");
			_exit(EXIT_FAILURE);
		}
	}
	else
	{
		perror("./hsh");
		_exit(EXIT_FAILURE);
	}
}
