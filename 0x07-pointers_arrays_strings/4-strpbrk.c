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

	for (; *s != end_char; s++)
	{
		temp = accept;
		for (; *temp != end_char; temp++)
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return (end_char);
}
