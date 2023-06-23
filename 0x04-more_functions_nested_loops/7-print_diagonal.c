#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print diagonal n numbers of times
 *@n: integer parameter
 * Return: returns void
*/
void print_diagonal(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{

		if (a > 0)
		{
			_putchar('\\');
		}
	}

	_putchar('\n');
}
