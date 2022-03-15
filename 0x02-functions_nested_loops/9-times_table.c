#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, k, mul, fmul, smul;

	while (k <= 9)
	{
		for (i = 0; i <= 9; i++)
		{
			mul = i * k;
			fmul = mul / 10;
			smul = mul % 10;
			if (i <= 8)
			{
				if (mul >= 10)
				{
					_putchar(fmul + '0');
					_putchar(smul + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(mul + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (i == 9)
			{
				if (mul >= 10)
				{
					_putchar(fmul + '0');
					_putchar(smul + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(mul + '0');
					_putchar('\n');
				}
			}
		}
		k++;
	}
}
