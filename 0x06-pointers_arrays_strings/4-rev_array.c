#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int x, y, i;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		i = a[x];
		a[x] = a[y];
		a[y] = i;
	}
}

