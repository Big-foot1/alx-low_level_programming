#include "main.h"

/**
 * print_to_98 - prints integers from n to 98
 * @n: number we pass to the function print_to_98
 * Return: printed list
 */

void print_to_98(int n)
{
	int i, j;

	if (n <=  98)
	{
		for (i = 0; i <= 98; i++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (j = 0; j > 98; j--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}	
}
