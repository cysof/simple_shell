#include "shell.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: char string to be concatenated
 * @src: chara string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
		j++;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
