#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function creates a duplicate of passed string using malloc
 * @str: string passed to the function
 * Return: NULL if string is null otherwise duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new_str = strdup(str);
		return (new_str);
	}
	return (0);
}
