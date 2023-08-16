#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *array_iterator - function iterates throught items in an array
 *@array: the array to iterate through the array passed to the function
 *@size: size of the array passed to the function
 *@action: pointer to the function that iterates
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
