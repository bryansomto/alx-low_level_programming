#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			i++;
		}
	}
	_putchar('\n');
}
