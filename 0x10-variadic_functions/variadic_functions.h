#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
#include <stdio.h>

/**
 * this is our variadic_function.h is a header file
 * it contain all our prototype files 
 * to be used in this project
 */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
