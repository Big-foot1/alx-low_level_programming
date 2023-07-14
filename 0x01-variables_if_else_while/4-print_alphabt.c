#include<stdio.h>

/**
 * main - program prints the alphabet in lowercase
 * should not print q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	return (0);
}

