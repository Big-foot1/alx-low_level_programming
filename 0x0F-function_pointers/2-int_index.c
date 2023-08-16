#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *int_index - function searches for an integer in array passed
 *@array: the array passed to the function
 *@size: size of the array passed to the function
 *@cmp: a pointer to a function to used to compare
 *Return: index of elemnt on success and -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if  (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
