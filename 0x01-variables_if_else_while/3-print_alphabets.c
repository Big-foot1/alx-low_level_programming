#include<stdio.h>

/**
 * main - program prints alpabet in lowercase
 * each letter is printed on a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char l_case = 'a';
	char u_case = 'A';

	/*we use for loop to print using putchar function*/
	for (l_case = 'a', u_case = 'A'; l_case <= 'z'; l_case++, u_case++)
	{
		putchar(l_case);
		putchar(u_case);
	}
	putchar('\n');
	return (0);
}
