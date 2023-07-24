#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strlen - funvtion checks length of a string
 * @s: string passed to the function
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
 * print_rev - printint string in reverse
 * @s: character passed to function
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	for ((i = _strlen(s) - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
