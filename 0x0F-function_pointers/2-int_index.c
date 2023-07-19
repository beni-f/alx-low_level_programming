#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - finds an integer
 *
 * @array: pointer to an integer
 * @size: integer
 * @cmp: pointer to a function
 *
 * Return: Always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			s = i;
			break;
		}
	}
	return (s);
}
