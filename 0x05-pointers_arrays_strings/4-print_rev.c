#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to string value
 * Return: void
 */
int count(char s);
void print_rev(char *s)
{
	int i, j;

	j = count(*s);
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
