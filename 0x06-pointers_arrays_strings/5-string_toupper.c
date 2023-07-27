#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * string_toupper - function converts lowercase strint to uppercase
 * @str: String passed to the function
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	char *upper_case = str;

	while (*str != '\0')
	{
		if (*str > 96 || *str > 123)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (upper_case);
}
