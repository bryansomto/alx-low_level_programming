#include "main.h"

/**
 * is_prime_number - returns the natural square root of a number
 * @n: param n
 * Return: 1 or 0 if prime or not prime respectively
 */
int is_prime_number(int n)
{
	int mid = n / 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 != 0)
		return (is_prime_number(mid - 1));
	return (1);
}
