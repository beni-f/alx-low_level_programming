#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 *
 * @size: integer input
 * @nmemb: integer input
 *
 * Return: string
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;

	return (a);
}
