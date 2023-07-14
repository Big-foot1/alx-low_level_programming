#include<stdio.h>

/**
 * main - program prints alpabet in lowercase
 * each letter is printed on a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpabet = 'a';

	/*we use while loop to print using putchar function*/
	while (alpabet <= 'z')
	{
		putchar(alpabet);
		alpabet++;
	}
	putchar('\n');
	return (0);
}
