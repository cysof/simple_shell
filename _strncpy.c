#include "shell.h"
/**
 * _strncpy - copies string
 * @dest: string 1 value
 * @src: string 2 value
 * @n: size
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}

