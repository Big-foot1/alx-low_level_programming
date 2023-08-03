#include "stdio.h"
#include "main.h"

/**
 * wildcmp - function compares two string if identical
 * @s1: string character1 passed to the function
 * @s2: string character2 passed to the function
 * Return: 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	return (0);
}
