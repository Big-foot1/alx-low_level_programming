#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strlen - function outs length of a string
 * @s: number passed to the function
 * Return: length of the string
 */

int _strlen(char *s)
{
	char end_char = '\0';
	int i = 0;

	while (*(s + i) != end_char)
	{
		i++;
	}
	return (i);
}

/**
 * _strncpy - function copies n characters from source string
 * @dest: String passed to the function
 * @src: string passed to the function
 * @n: characters to be copied from the src string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char end_char = '\0';
	int i = 0;

	while (_strlen(src[i]) < n)
	{
		dest[i] = end_char;
		i++;
	}
	while ((_strlen(src[i]) < n) && src[i] != end_char)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
