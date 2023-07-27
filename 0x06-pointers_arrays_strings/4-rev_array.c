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
	int i, *last_address, temp;

	i = 0;
	last_address = a + (n - 1);
	while (i < n)
	{
		if (a < last_address)
		{
			temp = *a;
			*a = *last_address;
			*last_address = temp;
		}
		i++;
		a++;
		last_address--;
	}
}
