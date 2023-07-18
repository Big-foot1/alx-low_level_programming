#include "stdio.h"
#include "main.h"

/**
 * print_alphabet - program prints lower case alphabet
 * using only two _putchar
 * ends with a new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
