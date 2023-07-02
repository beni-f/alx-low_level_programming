#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -i;
		_putchar('-');
	}

	if  (i / 10)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}