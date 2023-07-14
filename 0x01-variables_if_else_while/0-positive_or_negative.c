#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program prints a random number
 * checks whether the number is negative or positive
 * Returns: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*test if  number n is positive or negative*/
	if (n>0){
		printf("%d: is positive\n", n);
	}
	else if (n==0){
		printf("%d: is zero\n", n);
	}
	else {
		printf("%d: is negative\n", n);
	}
	return (0);
}
