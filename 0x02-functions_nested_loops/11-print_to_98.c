#include "main.h"

/**
 * print_to_98 - prints integers from n to 98
 * @n: number we pass to the function print_to_98
 * Return: printed list
 */

void print_to_98(int n)
{
	n = 0;

	if (n >= 0 && n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	else if (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	else if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
