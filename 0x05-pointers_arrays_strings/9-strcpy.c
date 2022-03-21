#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints n elements of an array of integers, followed by a new line
 * @dest: string destination pointer
 * @src: string source pointer
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	*dest += *src;
	return (dest + '0');
}
