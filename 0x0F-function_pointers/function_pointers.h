#ifndef POINTER_FUNC_H
#define POINTER_FUNC_H
#include <stddef.h>

/**
 * this is a header file
 * it contain all our prototype files 
 * to be used in this project
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int _putchar(char c);

#endif
