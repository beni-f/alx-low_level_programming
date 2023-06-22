#include "main.h"
#include <stdio.h>
/**
 * print_line - prints underscore n times
 *@n: integer parameter
 * Return : returns void
*/
void print_line(int n)
{
	int a = 0;

	for (a = 0; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
