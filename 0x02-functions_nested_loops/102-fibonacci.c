#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 & 2
 *
 * Return: 0
 */

int main(void)
{
	int x;
	unsigned long f1, f2, sum;

	f1 = 0;
	f2 = 0;

	for (x = 0; x < 50; x++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (x == 49)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
