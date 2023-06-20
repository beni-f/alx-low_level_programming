#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10c - prints lowercase alphabets 10 times
 *
 * Return - returns nothing
*/
void print_alphabet_x10(void)
{
	int ch, a;
	
	for (a = 0; a <= 9; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
