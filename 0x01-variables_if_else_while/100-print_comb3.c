#include<stdio.h>

/**
 * main - program prints a combination of 2 digits
 * leaving out similar combitions
 * assuming 01 is simialar to 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar(j + '0');
				putchar(i + '0');
			}
			if (j < '7' && i < '8')
			{	
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
