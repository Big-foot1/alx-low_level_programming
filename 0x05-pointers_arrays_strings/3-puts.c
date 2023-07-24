#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _puts - prints out a string
 * @str: string passed to the function
 * Return: print the string
 */

void _puts(char *str)
{
	int i = 0;
	char end_char = '\0';

	while (*(str + i) != end_char)
	{
		_putchar(*(str + 1));
	}
	_putchar('\n');
}
