#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - Program entry point
 * Return: return ppid
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("the parent process id is: %u\n", my_ppid);
	return (0);
}
