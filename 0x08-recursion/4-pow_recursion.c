#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: value to be raised by (power)
 * Return: returns raised value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
