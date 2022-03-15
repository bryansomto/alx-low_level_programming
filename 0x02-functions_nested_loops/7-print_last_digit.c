#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer param
 *
 * Return: returns 0
 */

int print_last_digit(int i)
{
	unsigned int j;

	j = i % 10;
	if (j >= 0)
	{
		_putchar(j + '0');
	}
	else
	{
		_putchar(j);
	}
	return (0);
}
