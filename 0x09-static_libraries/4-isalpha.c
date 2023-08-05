#include "stdio.h"
#include "main.h"

/**
 * _isalpha - checks if input is lowercase or uppercase
 * @c: number passed to _isalpha function
 * Return: 1 if lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	int result = 0;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
