#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_name - function prints a name using function pointers
 *@name: the name passed to the function
 *@f: pointer passed to the function
 *Return: printed name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
