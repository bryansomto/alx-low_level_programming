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
			for (k = i; k < size; k++)
			{
				_putchar(' ');
			}
			/* @j accounts for # */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
