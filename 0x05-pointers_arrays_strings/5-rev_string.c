#include "stdio.h"
#include "main.h"
#include "string.h"
#define MAX_LENGTH 1000

/**
 * _strlen - counts length of an array
 * @s: string passed to the function
 * Return: length of the string
 */

int _strlen(char *s)
{
	char end_char = '\0';
	int i = 0;

	while (s[i] != end_char)
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - printint string in reverse
 * @s: character passed to function
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i = 0;

	for ((i = _strlen(s) - 1); i >= 0; i--)
	{
		fputc(s[i], stdout);
	}
}
