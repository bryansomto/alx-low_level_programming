#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer size; specifies the triangle size
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			/* @k accounts for spaces */
			for (k = 0; k <= (size - i); k++)
			{
				_putchar(' ');
			}
			/* @j accounts for # */
			for (j = 0; j <= (size - k); j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
