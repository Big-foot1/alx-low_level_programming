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

	for (i = n - 1; i >= 0; i--)
	{
		aray = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = aray;
	}
}
