#include "stdio.h"
#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet 10 times
 * uses only 2 _putchar
 * end with a new line
 * return type void
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
