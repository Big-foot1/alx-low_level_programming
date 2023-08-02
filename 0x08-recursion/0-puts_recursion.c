#include "stdio.h"
#include "main.h"

/**
 * _puts_recursion - function prints strings and terminates with new line
 * @s:  string character passed to the function
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s <= '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
