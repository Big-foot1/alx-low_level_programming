#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * _memcpy - function copies bytes of the string
 * @dest: destination where copy is saved
 * @src: source where characters are to be copied
 * @n: number of bytes to be copied
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *q = src;

	while (n > 0)
	{
		*p = *q;
		p++;
		q++;
		n--;
	}
	return (dest);
}
