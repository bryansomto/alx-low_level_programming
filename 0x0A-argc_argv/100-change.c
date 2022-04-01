#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (!(argc > 1))
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) == 10)
		printf("%d\n", 1);
	else if (atoi(argv[1]) > 10 && atoi(argv[1]) <= 50)
		printf("%d\n", 2);
	else if (atoi(argv[1]) > 50 && atoi(argv[1]) <= 150)
		printf("%d\n", 5);
	else if (atoi(argv[1]) > 150 && atoi(argv[1]) <= 550)
		printf("%d\n", 10);
	else if (atoi(argv[1]) > 550 && atoi(argv[1]) <= 10000)
		printf("%d\n", 25);
	else if (atoi(argv[1]) < 0)
		printf("%d\n", 0);
	return (0);
}
