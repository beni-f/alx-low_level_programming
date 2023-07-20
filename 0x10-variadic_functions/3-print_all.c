#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: formats
 * Return: none
 */
void print_all(const char * const format, ...)
{	va_list valist;
	int i = 0, k = 0, x = 0;
	char *str;

	while (format[k] != '\0')
		k++;
	va_start(valist, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			x = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			x = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			x = 1;
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			x = 1;
			break;
		}
		if ((format[i + 1] == 'c' || format[i + 1] == 'i'
		|| format[i + 1] == 'f' || format[i + 1] == 's')
		&& x > 0)
			printf(", ");
		i++;
	}
	va_end(valist),	printf("\n");
}
