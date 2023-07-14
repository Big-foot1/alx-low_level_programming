#include<stdio.h>

/**
 * main - program prints alphabet in lowercase
 * each letter is printed in a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpabet = 'a';

	/* use while loop to print alpabet */
	while(alpabet <= 'z')
	{
		putchar(alpabet);
		alpabet++;
	}
	putchar('\n');
	return (0);
}
