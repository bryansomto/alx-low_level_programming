#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 *
 * @a:  array a
 * @n:  number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; *(a + i) != *(a + n); i++)
		;
	do {
		if (i != 1)
			printf("%d, ", *(a + (i - 1)));
		else
			printf("%d\n", *(a + (i - 1)));
		i--;
	} while (i > 0);
}
