#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: returns 0
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
