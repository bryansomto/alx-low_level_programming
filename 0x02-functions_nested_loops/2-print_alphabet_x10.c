#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Zero
 */
int print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
