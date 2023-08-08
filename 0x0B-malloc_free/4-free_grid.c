#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - function frees a pointer to a 2 dimensional array
 *@grid: 2 dimensional array passed to the function
 *@height: columns of the grid passed to the function
 *Return: freed memory
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
