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
	int num = 0;

	for (m = 0; m < 99; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (m < 10)
			{
				putchar(num + '0');
				putchar(m + '0');
				putchar(' ');
				putchar(num + '0');
				putchar(n + '0');
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
