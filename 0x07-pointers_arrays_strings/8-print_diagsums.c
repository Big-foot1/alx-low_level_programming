#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * print_diagsums - function prints the sum of two diagnals
 * @a: array passed to the fucntion
 * @size: size of the array or square
 * Return: sum of diagnals
 */

void print_diagsums(int *a, int size)
{
	int i;
	int major_diagnal = 0;
	int minor_diagnal = 0;

	for (i = 0; i < size; i++)
	{
		major_diagnal += a[i];
		minor_diagnal += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", major_diagnal);
	printf("%d\n", minor_diagnal);
}
