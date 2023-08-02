#include "stdio.h"
#include "main.h"

/**
 * _strlen_recursion - function calculates the length of passed string
 * @s:  string character passed to the function
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s <= '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
