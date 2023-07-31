#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strchr - function searches string for specified character
 * @s: string to be searched
 * @c: character to be searched
 * Return: searched character
 */

char *_strchr(char *s, char c)
{
	char end_char = '\0';

	while (*s >= end_char)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 * _strspn - function calculates length of substring
 * @accept: pointer to string to be matched
 * @s: pointer to string to be analyzed
 * Return: s - accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char end_char = '\0';
	char *str = s;

	while (*str != end_char && _strchr(accept, *str) != NULL)
	{
		str++;
	}
	return (str - s);
}
