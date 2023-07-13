#include<stdio.h>

/**
 * main - printing the size of various types on the computers
 * computers where it has evr compiled
 * Return: 0
 */
int main(void)
{
	float p;
	int q;
	char r;
	long int s;
	long long int t;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
return (0);
}
