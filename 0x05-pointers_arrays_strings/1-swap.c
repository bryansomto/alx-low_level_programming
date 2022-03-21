#include "main.h"

/**
 * swap_int - updates a value it points to to 98
 * @a: address pointer a
 * @b: address pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
