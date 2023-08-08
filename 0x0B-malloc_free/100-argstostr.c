#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function concatinate all arguments passed
 *@av: array arguments passed to the function
 *@ac: number of arguments passed to the function
 *Return: combined strings
 */

char *argstostr(int ac, char **av)
{
	int combined_length, i;
	char *combined_string;

	combined_length = 0;
	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		combined_length += strlen(av[i]);
	}
	combined_string = (char *)malloc(combined_length + 1);
	/* add 1 for terminating character */
	if (combined_string == NULL)
	{
		return (NULL);
	}
	strcpy(combined_string, "");
	for (i = 1; i < ac; i++)
	{
		strcat(combined_string, av[i]);
		strcat(combined_string, "\n");
	}
	return (combined_string);
}
