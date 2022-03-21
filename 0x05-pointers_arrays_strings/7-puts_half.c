#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: str pointer
 */
int strLen(char *s);

void puts_half(char *str)
{
	int i;
	char *j;

	j = strLen(*str);
	printf("%d\n", j);
	// for (i = 0; j != '\0'; j++)
		// _putchar(j);
}
int strLen(char *s)
{
	int i, n;

	for (i = 0; *s != '\0'; s++)
		i++;
	return(i);
	// if (i % 2 == 0)
	// {
		// n = i / 2;
		// return (n + '0');
	// }
	// else
	// {
		// n = (i - 1) / 2;
		// return (n + '0');
	// }
}
