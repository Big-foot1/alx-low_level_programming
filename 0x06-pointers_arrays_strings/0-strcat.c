#include "main.h"
#include "stdio.h"
#include "string.h"

#define MAX_LENGTH 100

/**
 * _strcat - function concatinates two strings
 * @dest: String passed to the function
 * @src: string passed to the function
 * Return: concatenation of two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char end_char = '\0';

	i = 0;
	j = 0;

	while (*(dest + 1) != end_char)
	{
		i++;
	}
	while (*(src + 1) != end_char)
	{
		*dest = *src;
		i++;
		j++;
	}
	*(dest + 1) = end_char;
	return (*dest);
}
