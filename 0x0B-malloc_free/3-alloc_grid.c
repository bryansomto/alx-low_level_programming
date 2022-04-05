#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: array width
 * @height: array height
 *
 * Return: returns NULL if param is -ve and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int) * (width + height));
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
	free(p);
}
