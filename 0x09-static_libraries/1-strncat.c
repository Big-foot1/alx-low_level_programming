#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strncat - function concatinates two strings
 * @dest: String passed to the function
 * @src: string passed to the function
 * @n: bytes of src string
 * Return: concatenation of two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char end_char = '\0';

	i = 0;
	j = 0;

	while (dest[i] != end_char)
	{
		i++;
	}
	while (j < n && src[j] != end_char)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = end_char;
	return (dest);
}
