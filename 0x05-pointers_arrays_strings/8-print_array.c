#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 * @a: pointer to integer parameter
 * @n : integer parameter
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
