#include "shell.h"
/**
 * _strcmp - function that compare two string
 * @str1: first string to comp
 * @str2: second string to comp
 * Return: return string
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
