#include <stdio.h>
/**
 * main - entry point to the program
 * Return: always return 0
 * @ac: agrument count
 * @av: argument vector
 */
int main(int ac, char **av)
{
	int i = 1;
	(void)ac;

	while (av[i] != NULL)
	{
		printf("the argument possition %d : %s\n", i, av[i]);
		i++;
	}
	return (0);
}
