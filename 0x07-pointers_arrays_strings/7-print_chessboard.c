#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * print_chessboard - function prints chess baord
 * @a: character passed to the function
 * Return: print chess board
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
