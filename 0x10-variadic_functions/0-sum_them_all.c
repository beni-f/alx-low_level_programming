#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer paramter
 * Return: returns 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		sum += x;
	}

	va_end(args);

	return (sum);
}
