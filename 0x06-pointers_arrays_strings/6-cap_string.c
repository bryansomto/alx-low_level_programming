#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str:  string to be converted
 *
 * Return: converted string
 */
char *cap_string(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
			str[i] = ' ';
		if (str[i] == ' '  || str[i] == '.')
		{
			i++;
			if (str[i] == '\n')
			{
				i++;
				for (j = 'a', k = 'A'; j <= 'z' && k <= 'Z'; j++, k++)
				{
					if (str[i] == j)
						str[i] = k;
					else
						str[i] = str[i];
				}
			}
			else
			{
				for (j = 'a', k = 'A'; j <= 'z' && k <= 'Z'; j++, k++)
				{
					if (str[i] == j)
						str[i] = k;
					else
						str[i] = str[i];
				}
			}
		}
	}
	return (str);
}
