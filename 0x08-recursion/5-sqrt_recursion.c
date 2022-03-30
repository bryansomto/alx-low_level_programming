#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square root of number to be returned
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n > 2 && (n / 2) * (n / 2) == n)
		return (n / 2);
	return (_sqrt_recursion(n - 1));
}
