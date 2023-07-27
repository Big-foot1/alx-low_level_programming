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
	int i;
	char end_char = '\0';

	i = 0;

	while (str[i] != end_char)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			return (str[i] - ('a' - 'A'));
		}
		else
		{
			return (str[i]);
		}
	}
	return (str);
}[
