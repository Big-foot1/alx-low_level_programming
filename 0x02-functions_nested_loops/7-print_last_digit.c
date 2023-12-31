#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number we pass to the print_last_digit function
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
	{
		n = -n;
		last_digit = -last_digit;
	}
	else
	{
		n = n;
		last_digit = last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
