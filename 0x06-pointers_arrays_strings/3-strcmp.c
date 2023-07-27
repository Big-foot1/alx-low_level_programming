#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strcmp - function compares two string characters
 * @s1: String passed to the function
 * @s2: string passed to the function
 * Return: difference of characters at mismatch point
 */

int _strcmp(char *s1, char *s2)
{
	char end_char = '\0';
	int i, j;

	i = 0;
	j = 0;

	while (*(s1 + i) != end_char && *(s2 + j) != end_char)
	{
		if (*(s1 + i) != *(s2 + j))
		{
			return (*(s1 + i) - *(s2 + j));
		}
		i++;
		j++;
	}
	return (*s1 - *s2);
}
