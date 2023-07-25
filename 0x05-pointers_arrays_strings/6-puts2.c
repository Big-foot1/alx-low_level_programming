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
	int i = 0;

	while (*(str + i) != end_char)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
