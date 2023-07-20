#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string input
 * @n: number of strings passed to the function
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	char *a;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);

		for (j = 0; a[j] != '\0'; j++)
		{
			if (a == NULL)
				printf("(nil)");
			else
				printf("%c", a[j]);
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
