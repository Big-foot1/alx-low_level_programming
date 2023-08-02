#include "stdio.h"
#include "main.h"

/**
 * _print_rev_recursion - function prints strings in reverse
 * @s:  string character passed to the function
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s <= '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
