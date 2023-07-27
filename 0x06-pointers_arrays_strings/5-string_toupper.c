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
	while (*str) {
        if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
	}
	str++;
	}
}
