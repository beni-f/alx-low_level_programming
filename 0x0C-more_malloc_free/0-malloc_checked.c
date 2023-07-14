#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 *
 * @b: integer input
 *
 * Return: returns pointer to a memory
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (b == 0 || a == NULL)
		exit(98);

	return (a);
}
