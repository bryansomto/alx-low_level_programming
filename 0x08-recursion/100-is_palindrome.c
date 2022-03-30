#include "main.h"

/**
 * _myStrlen - gets string length
 * @p: string to be counted
 * Return: returns string length
 */
char _myStrlen(char *p)
{
	if (!*p)
		return (0);
	return (1 + _myStrlen(p + 1));
}
/**
 * p1 - string iterator
 * @s: string paramsss
 * @l: length of string param
 * Return: returns string length
 */
int p1(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (p1(s + 1, l - 2));
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 or 0 if palindrome or not palindrome respectively
 */
int is_palindrome(char *s)
{
	int len;

	len = _myStrlen(s);
	return (p1(s, len - 1));
}
