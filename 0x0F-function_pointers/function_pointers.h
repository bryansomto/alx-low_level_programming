#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
void print_elem(int elem);
void print_elem_hex(int elem);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
