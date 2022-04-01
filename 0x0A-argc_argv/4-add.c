#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program entry
 * @s: argument count
 * @p: argument vector
 * Return: returns sum or 0 if arguments are not all integers
 */
int _add(int s, char *p[])
{
	int i, sum;

	sum = 0;
	if (!(s > 1))
		printf("%d\n", 0);
	if (s > 1)
	{
		for (i = 1; i < s; i++)
		{
			if (isdigit(*p[i]))
			{
				sum += atoi(p[i]);
				return (sum);
			}
			else
				return (0);
		}
		printf("%d\n", sum);
	}
}
/**
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int r;
	char *p = &argv;

	r = _add(argc, *p);
	printf("%d\n", r);
	return (0);
}
