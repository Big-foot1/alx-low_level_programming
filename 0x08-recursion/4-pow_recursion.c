#include "stdio.h"
#include "main.h"

/**
 * _pow_recursion - function prints the exponential of given integer
 * @x: base integer passed to the function
 * @y: exponential integer passed to the function
 * Return: -1 if n is less than 0 otherwise result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
