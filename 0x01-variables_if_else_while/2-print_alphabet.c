#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all letters of the alphabets (lowercase) using putchar()
 *
 * Return: program returns 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
