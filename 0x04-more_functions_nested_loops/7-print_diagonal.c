#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		_putchar(' ');
	}
}
