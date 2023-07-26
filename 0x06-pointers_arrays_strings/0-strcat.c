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
	char first_string[MAX_LENGTH], second_string[MAX_LENGTH];
	int i, j;
	char end_char = '\0';

	*dest = first_string;
	*src = second_string;
	i = 0;
	j = 0;

	while (first_string[i] != end_char)
	{
		++dest;
		i++;
	}
	while (second_string[j] != end_char)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	first_string[i] = end_char;
	printf("%s", first_string);
	return (0);
}
