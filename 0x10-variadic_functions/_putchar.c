#include<unistd.h>

/**
 * function is used to output individual characters
 * without relying on standard library functions
 * function takes character c as argument
 * and passes its address &c to write
 * returns the number of bytes wrriten or -1 in case of an error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
