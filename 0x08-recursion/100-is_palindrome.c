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
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - function checks if the string is empty
 * @s: string to passed ti the fucntion
 *
 * Return: 1 if empty, 0 if not empty
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

