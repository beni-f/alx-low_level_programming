#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints number upto 98
 *@n: integer parameter
 * Return: returns nothing
*/
void print_to_98(int n)
{
	int a;

	if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%i", a);

			if (a != 98)
				printf(", ");
		}

	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			printf("%i", a);

			if (a != 98)
				printf(", ");
		}
	}
	printf("\n");
}
