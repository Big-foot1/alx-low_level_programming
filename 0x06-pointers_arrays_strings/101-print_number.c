#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 *print_number - function prints an integer
 *@n: number passed to the function
 *Return: integer
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number < 10)
		_putchar('0' + number);
	else
	{
		print_number(number / 10);
		_putchar(number % 10 + '0');

	}
}
