#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: str pointer
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (i = i / 2; *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (i - 1) / 2; *(str + i) != '\0'; i++)
		{
			_putchar((*(str + i)) + 1);
		}
	}
	_putchar('\n');
}
