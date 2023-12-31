#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string input
 * @n: number of integers passed to the funtion
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		printf("%i", x);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
