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

	for (m = 0; m < 99; m++)
	{
		for (n = 1; n < 100; n++)
		{
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			putchar(' ');
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			if (m < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
