#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 *
 * @a: string
 * Return: returns nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
