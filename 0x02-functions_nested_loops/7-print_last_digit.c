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
	i = i % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
