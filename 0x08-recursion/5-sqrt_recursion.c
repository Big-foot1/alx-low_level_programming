#include "stdio.h"
#include "main.h"

/**
 * check_perfect_square - function checks if number is perfect square
 * @num: number passed to the fucntion for square root
 * @rt: roots of the number passed to the function
 * Return: natural numbers or -1
 */

int check_perfect_square(int num, int rt)
{
	if (rt * rt == num)
	{
		return (rt);
	}
	else if (rt * rt > num)
	{
		return (-1);
	}
	return (check_perfect_square(num, (rt + 1)));
}

/**
 * _sqrt_recursion - function prints square root of a given integer
 * @n: integer passed to the function
 * Return: -1 if sqrt not natural number otherwise sqrt
 */

int _sqrt_recursion(int n)
{
	return (check_perfect_square(n, 1));
}
