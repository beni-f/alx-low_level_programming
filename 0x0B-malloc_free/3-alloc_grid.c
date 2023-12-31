#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array
 *
 * @width: input
 * @height: input
 *
 * Return: returns 0
*/
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	a = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			while (i >= 0)
				free(a[i--]);

			free(a);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
