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
		for (i = n; i < 98; i++)
		{
			if (i < 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == n)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j > 98; j--)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}	
}
