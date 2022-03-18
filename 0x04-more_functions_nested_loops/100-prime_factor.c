#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, m, n;

	m = 1231952;
	n = m / 2;
	j = i / 2;

	for (i = 2; i <= n; i++)
	{
		if (m % i == 0)
		{
			for (j = (i / 2); j >= 2; j--)
			{
				// if (!(i % j == 0 || i % j != 0))
				// {
					// printf("%ld/%ld ", i,j);
					printf("%ld, ", (i/j));
					// break;
				// }
			}
		}
	}

	return (0);
}
