#include "main.h"
/**
 * _strstr - finds first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to be searched
 * @needle: set of byte(s) to be searched for
 *
 * Return: pointer to byte s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *str;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				str = (needle + i);
				return (str);
			}
		}
	}
	return ('\0');
}
