#include "main.h"
#include "stdio.h"

/**
 *_strlen - calculate length of a string
 *@str: string passed to the function
 *Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;
	char end_char = '\0';

	while (*(str + i) != end_char)
	{
		i++;
	}
	return (i);
}

/**
 *check_char - check if character is number
 *@ch: the character passed to the function
 *Return: 1 on Success 0 on failure
 */

int check_char(char ch)
{
	if (ch < 58 && ch > 47)
	{
		return (1);
	}
	return (0);
}

/**
 *find_minus - finds a + or - in a string
 *@str: string passed to the function
 *Return: 1 on success 0 otherwise
 */

int find_minus(char *str)
{
	int i, sum;
	char end_char = '\0';

	sum = 0;
	i = 0;

	while (*(str + i) != end_char)
	{
		if (*(str + i) == '-')
		{
			sum += 1;
			if (check_char(*(str + i + 1)) == 1)
			{
				break;
			}
		}
		i++;
	}
	if (sum % 2 == 1)
	{
		return (0);
	}
	return (1);
}

/**
 *check_numbers - Checks if there are any numbers in string
 *@str: string passed to the function
 *Return: 0 or 1
 */

int check_numbers(char *str)
{
	char ch;
	int i, sum;

	sum = 0;
	i = 0;

	while (*(str + i) != '\0')
	{
		ch = *(str + i);
		if (ch < 58 && ch > 47)
		{
			sum += 1;
		}
		i++;
	}
	if (sum > 0)
	{
		return (1);
	}
	return (0);
}

/**
 *_atoi - turn digits in string into numbers
 *@s: string passed to the function
 *Return: the digits
 */

int _atoi(char *s)
{
	char ch;
	int i, result;
	unsigned int res;

	i = 0;
	res = 0;

	if  (check_numbers(s) == 1)
	{
		while (*(s + i) != '\0')
		{
			ch = *(s + i);
			if (check_char(ch) == 1)
			{
			/* converting character into string */
				int num;

				num = ch - '0';
				res = (res * 10) + num;

				result = res;

				if (check_char(*(s + i + 1)) == 0)
				{
					break;
				}
			}
			i++;
		}
		if (find_minus(s) == 0)
		{
			result = res * -1;
		}
		return (result);
	}
	else
	{
	return (0);
	}
}
