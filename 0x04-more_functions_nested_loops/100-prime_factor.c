#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int x, i, pf;

	// pf = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pf = 2;
		x = x / 2;
	}
	for (i = 3; i <= (x / 2); i = i + 2)
	{
		while (x % i == 0)
		{
			pf = i;
			x = x / i;
		}
	}
	if (x > 2)
		pf = x;

	printf("%ld\n", pf);
	return (0);
}
