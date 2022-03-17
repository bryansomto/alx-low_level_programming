#include <stdio.h>

/**
 * main - Fizz Buzz Test
 *
 * Description: prints the numbers from 1 to 100, followed by a new line
 * multiples of 3 and 5 are replaced with Fizz and Buzz respectively
 * multiples of both 3 and 5 are replaced with FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
}
