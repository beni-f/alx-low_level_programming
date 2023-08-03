#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary number
 *
 * @n: integer input
*/
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >> 1);

	if (n & 1)
	{
		_putchar('1');
	}
	else
		_putchar('0');
}
