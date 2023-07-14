#include<unistd.h>

/**
 * main - print to standard output without
 * using printf or puts
 * Return: 1
 */
int main(void)
{
	char stng[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, stng, sizeof(stng) - 1);
	return (1);
}
