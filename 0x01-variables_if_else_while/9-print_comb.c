#include<stdio.h>

/**
 * main - programs prints combinations of single digit
 * seperated by commas
 * in ascending order
 * using the putchar()
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
