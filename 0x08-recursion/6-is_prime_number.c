#include "main.h"

/**
 * divisors - prime determiner
 * @n: param n
 * @m: param m
 * Return: 1 or 0
 */
int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: param n
 * Return: 1 or 0 if prime or not prime respectively
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}
