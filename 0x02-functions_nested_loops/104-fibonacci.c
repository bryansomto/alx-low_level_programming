#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1_half1, fb1_half2, fb2_half1, fb2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}

	fb1_half1 = fb1 / 10000000000;
	fb2_half1 = fb2 / 10000000000;
	fb1_half2 = fb1 % 10000000000;
	fb2_half2 = fb2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fb1_half1 + fb2_half1;
		half2 = fb1_half2 + fb2_half2;
		if (fb1_half2 + fb2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fb1_half1 = fb2_half1;
		fb1_half2 = fb2_half2;
		fb2_half1 = half1;
		fb2_half2 = half2;
	}
	printf("\n");
	return (0);
}
