#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single decimal numbers starting from 0
 *
 * Return: returns 0
 */

int main(void)
{
	int x;

	do {
		putchar(x + '0');
		x++;
	} while (x <= 9);
	putchar('\n');
	return (0);
}
