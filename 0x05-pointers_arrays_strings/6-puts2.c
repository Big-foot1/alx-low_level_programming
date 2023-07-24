#include "stdio.h"
#include "main.h"

/**
 * puts2 - prints even number
 * @str: string passed to the function
 * Return: even strings
 */

void puts2(char *str)
{
	char end_char = '\0';
	char two_chars;
	int i = 0;

	while (*(str + i) != end_char)
	{
		two_chars = str[::2];
	}
	_putchar('\n');
}
