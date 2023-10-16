#include "shell.h"

/**
 * _strtrim - Trim leading and trailing whitespace from a string.
 * @c: The string to trim.
 * Return: A pointer to the trimmed string.
 */
char *_strtrim(char *c)
{
	char *end;

	while (*c && (*c == ' ' || *c == '\t' || *c == '\n'))
	{
		c++;
	}

	if (*c == '\0')
	{
		return (c); /* return if the entire string is whitespace */
	}

	/* move end pointer back to remove trailing whitespace */
	end = c + _strlen(c) - 1;
	while (end > c && (*end == ' ' || *end == '\t' || *end == '\n'))
	{
		end--;
	}
	*(end + 1) = '\0'; /* null-terminate the trimmed string */

	return (c); /* return a pointer to the trimmed string */
}
