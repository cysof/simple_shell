#include "shell.h"
/**
 * _strlen_const - calculates the length a string
 * @s: pointer to the string input
 *
 * Return: length of string
 */
int _strlen_const(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (1);
}
/**
 * _strdup - create a dup
 *
 * this function allocates memory for new string
 * @src: pointer to the source string
 * Return: point to the newly allocated
 */
char *_strdup(const char *src)
{
	int length, j;
	char *dst;

	if (src == NULL)
		return (NULL);
	length = _strlen_const(src);
	if (length < 0)
		return (NULL);

	length++;
	dst = malloc((length) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
		dst[j] = src[j];
	dst[j - 1] = '\0';
	return (dst);
}
