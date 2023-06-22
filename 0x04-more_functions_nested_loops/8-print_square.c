#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square followed by a new line
 * @size: integer parameter
 * Return: returns nothing
*/
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
