#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function concatinate two string characters
 *@s1: first string passed to the function
 *@s2: second string passed to the function
 *Return: combined strings
 */

char *str_concat(char *s1, char *s2)
{
	char *comb_strs;
	size_t str1_len, str2_len;

	str1_len = strlen(s1);
	str2_len = strlen(s2);
	comb_strs = (char *)malloc(str1_len + str2_len + 1);
	/* add 1 for null terminator */
	if (comb_strs == NULL)
	{
		return (NULL);
	}
	strcpy(comb_strs, s1);
	strcat(comb_strs, s2);
	return (comb_strs);
}
