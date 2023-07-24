#include "main.h"

/**
 * swap_int - swap values of two intergers
 * @a: arguments passes to the function
 * @b: argument passed to the function
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
