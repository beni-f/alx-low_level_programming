#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc
 *
 * @new_size: size in bytes of the new memory bloc
 * @old_size: size in bytes of the allocated space for ptr
 * @ptr: a pointer to the memory
 *
 * Return: returns pointer to a memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *oldptr;

	unsigned int i, j, k;

	oldptr = ptr;
	k = old_size;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}
	a = malloc(new_size);

	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = oldptr[i];
		for (j = old_size; j < new_size; j++)
		{
			a[j] = oldptr[new_size - old_size - k];
			k--;
		}
	}
	else if (new_size == old_size)
		return (ptr);
	else if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			a[i] = oldptr[i];
	}
	return (a);
}
