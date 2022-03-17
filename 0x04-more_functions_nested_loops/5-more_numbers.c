#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 0 - 14, 10 times
 */

void main(void)
{
	int i, row;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
