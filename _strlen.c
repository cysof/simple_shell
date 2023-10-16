#include "shell.h"
/**
 * _strlen - function to calculate length of a string
 * @str: string to cal
 * Return: return length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
