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
