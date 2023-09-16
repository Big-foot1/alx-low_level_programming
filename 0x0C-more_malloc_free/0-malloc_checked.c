#include "main.h"
/**
 *malloc_checked - a function allocates memory using malloc
 *@b: size of the allocated memory
 *Return: address to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
	}
	return (temp);
}
