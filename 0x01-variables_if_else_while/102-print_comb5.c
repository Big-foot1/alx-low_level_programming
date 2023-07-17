#include<stdio.h>

/**
 * main - program all posible combinations of two two digits
 * two numbers are seperated by a space
 * after every combination must be a seperating comma
 * combinations must be in ascending order
 * Return: Always 0 (success)
 */
int main(void)
{
	int m, n;
	int num1;

	num1 = 0;
	for (m = 0; m < 99; m++)
	{
		for (n = 1; n < 100; n++)
		{
			if (m < 10)
			{
				putchar('0' + num1);
				putchar('0' + m);
				putchar(' ');
				putchar('0' + num1);
				putchar('0' + n);
			}
			else
			{
				putchar(m + '0');
				putchar(' ');
				putchar(n + '0');
			}
		}
	}
	return (0);
}
