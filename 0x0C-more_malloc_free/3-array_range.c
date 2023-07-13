#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - allocates memory for an array
 *
 * @max: integer input
 * @min: integer input
 *
 * Return: returns int
*/
int *array_range(int min, int max)
{
	int *a, n, i, j;

	if (min > max)
		return (NULL);
	n = max - min + 1;

	a = malloc(sizeof(int) * n);

	if (a == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max || j < n; i++, j++)
	{
		a[j] = i;
	}

	return (a);
}
