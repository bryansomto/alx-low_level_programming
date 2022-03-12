#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print all possible combo of two 2-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* tens firstnum */
		b = i % 10; /* unit firstnum */

		for (j = 0 ; j < 100; j++)
		{
			c = j / 10; /* tens secondnum */
			d = j % 10; /* unit secondnum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
