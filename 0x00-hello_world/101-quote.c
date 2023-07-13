#include<unistd.h>

/**
 * main - print to standard output without
 * using printf or puts
 * Return: 1
 */
int main(void)
{
	char my_strng[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, my_strng, sizeof(my_strng) -1);
	return (1);
}
