#include "shell.h"
/**
 * main - Entry point to the program
 * the function implements loop to wait for user
 * imput.
 * Return: Always return 0
 */
int main(void)
{
	char *user_input = NULL;
	size_t user_input_size = 0;
	ssize_t read_size;
	int output;

	while (1)
	{
		display_prompt();/* function that display  */
		read_size = getline(&user_input, &user_input_size, stdin);
		if (read_size == -1)
		{
			free(user_input);
			return (0); /* kill the loop and move on.. */
		}
		if (user_input[read_size - 1] == '\n')
			user_input[read_size - 1] = '\0';
		if (_strncmp(user_input, "exit", 4) == 0)/* checking if user enter exit*/
		{
			free(user_input);
			user_input = NULL;
			user_input_size = 0;
			exit(EXIT_SUCCESS);
		}
		if (_strcmp(_strtrim(user_input), "env") == 0)/* handling evn */
		{
			print_env();
			continue;
		}
		if (read_size > 1)
		{
			output = exe_command(_strtrim(user_input));
			if (output == -1)
				break;
		}
	}
	free(user_input);
	return (0);
}

