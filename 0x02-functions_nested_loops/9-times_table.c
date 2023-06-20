#include <stdio.h>
#include "main.h"
/**
 * times_table - prints time table
 *
 *Return: returns nothing
*/
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b > 0)
			{
				printf(", ");

			}

		printf("%i", product);

		}
		putchar('\n');
	}
}
