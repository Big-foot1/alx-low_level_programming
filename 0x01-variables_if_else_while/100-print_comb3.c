#include<stdio.h>

/**
 * main - program prints a combination of 2 digits
 * leaving out similar combitions
 * assuming 01 is simialar to 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, ij;

	for (i = 0, j = 0; i < 100 && j < 100; i++, j++)
	{
		if (i != j && ij != ji)
		{
			putchar(ij + '0');
			while (ij < 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
