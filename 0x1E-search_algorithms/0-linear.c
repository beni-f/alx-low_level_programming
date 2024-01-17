#include "search_algos.h"
/**
 * linear_search - A function that searches for a value using Linear Search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to reseach to for
 *
 * Return: returns the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i, found = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		return (-1);
	}
	return (i);
}
