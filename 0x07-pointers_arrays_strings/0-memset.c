#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _memset - function fills memory with constant byte
 * @s: char passed to the function
 * @b: value to be set in memory
 * @n: number of bytes to set to specified value
 * Return: constant value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
