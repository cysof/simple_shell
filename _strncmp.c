#include "shell.h"
/**
 * _strncmp - compares two strings and returns their difference
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to compare
 * Return: number of bytes that differ
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t j;

	for (j = 0; j < n; j++)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		if (s1[j] == '\0')
			return (0);
	}
	return (0);
}
