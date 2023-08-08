#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array
 *@width: first string passed to the function
 *@height: second string passed to the function
 *Return: combined strings
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = (int **)malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}