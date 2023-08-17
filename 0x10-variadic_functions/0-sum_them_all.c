#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all -  function computes sum of the unknown arguments
 *@n: number of unknown arguments passed to the function
 *Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int result = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
