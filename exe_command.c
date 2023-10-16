#include "shell.h"
/**
 * exe_command - command with argument to be executed
 * @command_with_args: the command with its argument
 * Return: always return 0 on sucess
 */
int exe_command(char *command_with_args)
{
	pid_t child_pid;
	int status, arg_count = 0;
	char *token, *args[MAX_INPUT_LEN / 2 + 2];

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		return (-1);
	}
	if (child_pid == 0)
	{
		token = strtok(command_with_args, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execute_child_process(args[0], args);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
