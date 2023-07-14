#include<stdio.h>

/**
 * main - program prints single digits of
 * base 10 starting with 0
 * using the putchar () function
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
