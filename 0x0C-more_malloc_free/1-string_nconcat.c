#include "main.h"

/**
 *_strlen - function calculates the string length
 *@str: the string passed to the function
 *Return: the length of the string
 */

unsigned int _strlen(char *str)
{
	char end_char = '\0';
	unsigned int i = 0;

	while (*(str + i) != end_char)
	{
		i++;
	}
	return (i);
}

/**
 *string_nconcat -function join two strings
 *@s1: first string passed ti the function
 *@s2: second string passed to the function
 *@n: number of bytes to copy from s2
 *Return: address to the joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joint, end_char = '\0';
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}

	joint = (char *)malloc(_strlen(s1) + n + 1);

	if (joint == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		*(joint + i) = *(s1 + i);
		i++;
	}


	while (j < n)
	{
		*(joint + i) = *(s2 + j);
		j++;
		i++;
	}
	*(joint + i) = end_char;

	return (joint);
}
