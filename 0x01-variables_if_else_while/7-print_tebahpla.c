#include <stdio.h>

/**
 * main - entry
 *
 * Description: print lowercase alphabets in reverse and a newline
 *
 * Return: returns 0
 */

int main(void)
{
	char ch;

	ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');
	putchar('\n');
	return (0);
}
