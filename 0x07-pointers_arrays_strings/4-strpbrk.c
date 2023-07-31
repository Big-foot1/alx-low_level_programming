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
 * _strpbrk - function that returns first occurence of character from string
 * @s: pointer to string to be searched
 * @accept: pointer to string containing character
 * Return: first occurence of any matching character
 */

char *_strpbrk(char *s, char *accept)
{
	char end_char = '\0';

	while (*s != end_char)
	{
		if (_strchr(accept, *s) != NULL && *s == *accept)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
