#include<stdio.h>

/**
 * main - program prints alpabet in lowercase
 * each letter is printed on a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int l_case = 'a';
	int u_case = 'A';

	/*we use for loop to print using putchar function*/
	for (int i = 0; i < 26; i++)
	{
		putchar(l_case + i);
	}
	for (int i = 0; i < 26; i++)
	{
		putchar(u_case + i);
	}
	putchar('\n');
	return (0);
}
