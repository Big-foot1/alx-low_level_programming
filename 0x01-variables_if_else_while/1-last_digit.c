#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program will assign random number to
 * variable n each time it is executed
 * test whether last digit of n
 * is greater or less than 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/*check if last digit of n is less or greater than 5*/
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,l);
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,l);
	}
	return (0);
}

