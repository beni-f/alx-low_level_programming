#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - main entry
 *
 * @array: pointer to an integer
 * @size: unsigned int parameter
 * @action: pointer to a function
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || size <= 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
