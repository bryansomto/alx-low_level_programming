#include "main.h"

/**
 * jack_bauer - prints every minutes of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int fc, sc, tc, lc;

	fc = 0;
	sc = 0;
	tc = 0;
	lc = 0;
	while (1)
	{
		_putchar(fc + '0');
		_putchar(sc + '0');
		_putchar(':');
		_putchar(tc + '0');
		_putchar(lc + '0');
		_putchar('\n');
		lc++;
		if (lc == 10)
		{
			tc++;
			if (tc == 6)
			{
				sc++;
				if (sc == 4)
				{
					fc++;
					if (fc == 3)
					{
						fc = 0;
					}
					sc = 0;
				}
				tc = 0;
			}
			lc = 0;
		}
		if (fc == 2 && sc == 3 && tc == 5 && lc == 9)
		{
			brea;
		}
	}
}
