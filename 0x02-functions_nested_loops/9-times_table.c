#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
