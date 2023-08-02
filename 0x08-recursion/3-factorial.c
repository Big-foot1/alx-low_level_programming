#include "stdio.h"
#include "main.h"

/**
 * factorial - function prints factorial of a given integer
 * @n: integer passed to the function
 * Return: -1 if n is less than 0 otherwise n!
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
