#include "main.h"
/**
 * _strspn - gets the length of a prefix of substring
 *
 * @s: initial segment
 * @accept: ref segment
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(accept + i) == *(s + j))
				count++;
		}
	}
	return (count);
}
