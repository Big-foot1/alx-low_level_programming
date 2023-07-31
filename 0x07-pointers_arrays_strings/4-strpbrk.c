#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _strpbrk - function that returns first occurence of character from string
 * @s: pointer to string to be searched
 * @accept: pointer to string containing character
 * Return: first occurence of any matching character
 */

char *_strpbrk(char *s, char *accept)
{
	char end_char = '\0';
	char *temp;

	while (*s != end_char)
	{
		temp = accept;
		while (*temp != end_char)
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
