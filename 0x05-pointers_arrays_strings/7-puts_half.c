#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 *puts_half - prints a odd character string
 *@str: the string passef to the function
 *Return: String of odd characters
 */

void puts_half(char *str)
{
	int length, i, count;
	char end_char = '\0';

	count = 0;

	/*Calculate length of the string*/
	while (*(str + count) != end_char)
	{
		count++;
	}
	length = count;

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length / 2) + 1;
	}
	while (*(str + i) != end_char)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
