#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of characters
 * @size: size of an array created by the function
 * @c: specific character that initialize the array
 * Return: NULL if size if 0 or array is null otherwise array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		/* memory allocation failed */
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
