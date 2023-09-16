#include "main.h"

/**
 *_calloc - function allocates memory of an array
 *@nmemb: number of elements passed to the function
 *@size: size of bytes for each element
 *Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = (char *)malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		*(memory + i) = 0;
		i++;
	}
	return (memory);
}
