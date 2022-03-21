#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line.
 * @str: str pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++, str++)
		_putchar(*(str + i));
	_putchar('\n');
}
