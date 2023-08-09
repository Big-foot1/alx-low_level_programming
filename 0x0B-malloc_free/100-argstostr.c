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
	int combined_length, i, j, k;
	char *combined_string;

	combined_length = 0;
	k = 0;
	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			combined_length++;
		}
		combined_length += ac;
	}
	combined_string = malloc(sizeof(char) * combined_length + 1);
	/* add 1 for terminating character */
	if (combined_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			combined_string[k] = av[i][j];
			k++;
		}
		if (combined_string[k] == '\0')
		{
			combined_string[k++] = '\n';
		}
	}
	return (combined_string);
}
