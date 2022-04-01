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
	else if (atoi(argv[1]) > 0 && atoi(argv[1]) < 13)
		printf("%d\n", 1);
	else if (atoi(argv[1]) >= 13 && atoi(argv[1]) < 100)
		printf("%d\n", 3);
	else if (atoi(argv[1]) == 100)
		printf("%d\n", 4);
	else if (atoi(argv[1]) > 100 && atoi(argv[1]) <= 150)
		printf("%d\n", 5);
	else if (atoi(argv[1]) > 150 && atoi(argv[1]) <= 550)
		printf("%d\n", 10);
	else if (atoi(argv[1]) > 550 && atoi(argv[1]) <= 10000)
		printf("%d\n", 25);
	else if (atoi(argv[1]) < 0)
		printf("%d\n", 0);
	return (0);
}
