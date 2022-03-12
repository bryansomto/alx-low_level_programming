#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all letters of the alphabets using putchar()
 * 		letters are printed in lower and upper cases
 *
 * Return: program returns 0 (Success)
 */

int main(void)
{
	char ch;
	char CH;

	ch = 'a';
	CH = 'A';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	
	do {
		putchar(CH);
		CH++;
	} while (CH <= 'Z');

	putchar('\n');

	return (0);
}
