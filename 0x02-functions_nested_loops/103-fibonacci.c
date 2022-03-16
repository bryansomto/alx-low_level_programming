#include <stdio.h>

/**
 * main - finds and prints sum of even valued term
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float totalSum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			totalSum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", totalSum);
	return (0);
}
