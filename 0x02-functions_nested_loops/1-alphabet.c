#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: returns void
*/
void print_alphabet(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
