#include "stdio.h"
#include "main.h"

/**
 *_strcpy - copy a string
 *@src: string passed to the function
 *@dest: string passed to the function
 *Return: string copied
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_first = dest;
	char end_char = '\0';

	while (*src != end_char)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = end_char;
	return (dest_first);
}
