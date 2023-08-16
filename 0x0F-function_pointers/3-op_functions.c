#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - functions computes the sum of two numbers.
 * @a: The first number passed to the function
 * @b: The second number passed to the function
 * Return: the sum of the two numbers a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function computes the difference between two numbers.
 * @a: The first number passed to the function
 * @b: The second number passed to the function
 * Return: the difference of the two numbers a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function computes the product of two numbers.
 * @a: The first number passed to the function
 * @b: The second number passed to the function
 * Return: the product of the two numbers a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function computes the division of two numbers.
 * @a: The first number passed to the function
 * @b: The second number passed to the function
 * Return: the division of two numbers a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function computes remainder after the division of two numbers.
 * @a: The first number passed to the function
 * @b: The second number passed to the function
 * Return: The remainder after division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
