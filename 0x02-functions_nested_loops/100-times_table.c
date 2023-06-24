#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints a time table
 * @n: integer parameter
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (i * j >= 10 && product < 100)
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product >= 100)
				{
					_putchar(product / 100 + '0');
					_putchar((product % 100) / 10 + '0');
					_putchar((product % 100) % 10 + '0');
				}
				else
					_putchar(product + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' '); }
			}
			_putchar('\n');	}
	}
}
