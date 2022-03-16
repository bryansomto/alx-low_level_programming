#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: int param
 */

void print_times_table(int n)
{
	int num, mul, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{

			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mul;
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}

