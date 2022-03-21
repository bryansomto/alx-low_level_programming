#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string
 * @s: char pointer
 */
int count(char s);

void rev_string(char *s)
{
	int i, j;

	j = count(*s);
	printf("%d\n", j);
	for (i = (j - 1); i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

int count(char s)
{
	int i;
	
	i = 0;
	while (s != '\0')
		i++;
	printf("%d", i);
}
