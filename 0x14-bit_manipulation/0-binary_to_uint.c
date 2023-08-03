#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - binary to unsigned integer
 *
 * @b: string input
 *
 * Return: returns decimal/integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, num = 0;

	int i, len, temp;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = len - 1, temp = 1; i >= 0; i--, temp *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		else if (b[i] & 1)
		{
			x += temp;
			num++;
		}
	}

	return (x);
}
