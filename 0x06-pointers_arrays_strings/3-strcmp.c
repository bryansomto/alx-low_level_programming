#include "main.h"

/**
 * _strcmp - Concatenates two strings
 *
 * @s1: pointer to string to be appended to
 * @s2: pointer to string appended
 *
 * Return: 15, -15 & 0 if length of s1 > s2, s1 < s2 & s1 == s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, n;

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	if (i == j)
	{
		n = 0;
		return (n);
	}
	else if (i > j)
	{
		n = 15;
		return (n);
	}
	else
	{
		n = -15;
		return (n);
	}
}
