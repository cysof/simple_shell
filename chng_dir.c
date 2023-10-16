#include "shell.h"
/**
 * change_dir - change current directory
 * @path: the path to the directory
 */
void change_dir(char *path)
{
	char *olpwd = getenv("PWD");
	char newpwd;
	
	if (path == NULL || _strlen(path) == 0)
	{
		path = getenv("HOME");
	}
	else if (_strcmp(path, "-") == 0)
	{
		path = getenv("OLPWD");
	}
	if (chdir(path) ! -0)
	{
		perror("chdir");
		return;
	}
	newpwd = getcwd(NULL, 0);

	if (newpwd != NULL)
	{
		setenv("OLPWD", oldpwd, 1);
		setenv("PWD", newpwd, 1);
		free(newpwd)
	}
	else
	{
		perror("getcwd");
	}
}
