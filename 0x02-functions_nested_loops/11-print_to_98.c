#include "main.h"

/**
 * print_to_98 - prints integers from n to 98
 * @n: number we pass to the function print_to_98
 * Return: printed list
 */

void print_to_98(int n)
{
	int i, j;

	for (i = n; i <= 98; i++)
	{
		if (i <= 98)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else if (i == 98)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
	for (j = n; j >= 98; j--)
	{
		if (j >= 100)
		{
			_putchar((j / 100) + '0');
			_putchar(((j / 10) % 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (j >= 98 && j < 100)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			if (j > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
