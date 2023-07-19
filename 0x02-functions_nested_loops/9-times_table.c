#include "main.h"

/**
 * times_table - prints the time table of 9
 * Return: multples of 9
 */

void times_table(void)
{
	int rows, column, multiple;

	for (rows = 0; rows < 10; rows++)
	{
		for (column = 0; column < 10; column++)
		{
			multiple = rows * column;
			if (rows == 0)
			{
				_putchar(multiple + '0');
			}
			if (multiple < 10 && rows != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}
			else if (multiple >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
