#include "stdio.h"
#include "main.h"

/**
 * main - program prints lower case alphabet
 * using only two _putchar
 * ends with a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
