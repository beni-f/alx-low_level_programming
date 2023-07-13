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
	int *a;

	
	if (min > max)
		return (NULL);
	
	a = malloc (max - min);

	if (a == NULL)
		return (NULL);

	

	return (a);
}
