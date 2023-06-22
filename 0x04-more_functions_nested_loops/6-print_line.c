#include "main.h"
#include <stdio.h>
/**
 * print_line - prints underscore n times
 *@n: integer parameter
 * Return : returns void
*/
void print_line(int n)
{
	int a = 1;

	for (a = 1; a <= n; a++)
	{
		if (a <= 0)
		{
			a = 0;
		}
		_putchar('_');
	}
	_putchar('\n');
}
