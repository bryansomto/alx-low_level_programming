#include "main.h"

/**
 * more_numbers - print 0 - 14, 10 times
 */

void more_numbers(void)
{
	int i, row;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
