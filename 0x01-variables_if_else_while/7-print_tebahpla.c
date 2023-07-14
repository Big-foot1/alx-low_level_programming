#include<stdio.h>

/**
 * main - program prints alphabet in lowercase
 * in reverse order
 * Return: always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
