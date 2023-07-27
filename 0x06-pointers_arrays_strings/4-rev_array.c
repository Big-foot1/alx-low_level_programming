#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * reverse_array - function prints array in reverse order
 * @a: array passed to the function
 * @n: size of array passed to the function
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
	int i;
	int aray;

	for (i = 0; i < n - 1; i++)
	{
		aray = *(a + i);
		*(a + i) = *a[n];
		*a[n] = aray;
	}
}
