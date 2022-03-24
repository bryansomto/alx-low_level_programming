#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str:  string to be converted
 *
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 'a', k = 'A'; j <= 'z' && k <= 'Z'; j++, k++)
		{
			if (str[i] == j)
			{
				str[i] = k;
			}
			else
				str[i] = str[i];
		}
	}
	return (str);
}
