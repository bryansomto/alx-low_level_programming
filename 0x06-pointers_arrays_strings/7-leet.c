#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str:  string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char val[] = "43071";
	char alpha[] = "aeotl";
	char ALPHA[] = "AEOTL";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; val[j] != '\0' && alpha[j] != '\0' && ALPHA[j] != '\0'; j++)
			if (str[i] == alpha[j] || str[i] == ALPHA[j])
				str[i] = val[j];
	return (str);
}
