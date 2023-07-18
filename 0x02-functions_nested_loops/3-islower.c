#include "stdio.h"
#include "main.h"

/**
 * _islower - checks for lowercase character 'c'
 * Return: 1 if c is lowercase otherwise 0
 *@c: number to pass to _islower function
 */

int _islower(int c)
{
	int result = 0;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	return (result);
}
