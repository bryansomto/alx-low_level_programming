#include <stdio.h>

/**
 * main - entry
 *
 * Description: print lowercase alphabets in reverse
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
	return (0);
}
