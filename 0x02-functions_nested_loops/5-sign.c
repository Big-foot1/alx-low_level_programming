#include "main.h"

/**
 * print_sign - checks the sign of the number
 * @n: Number passed to print_sign function
 * Return: 1 if positive 0 if zero -1 if less than zero
 */

int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
