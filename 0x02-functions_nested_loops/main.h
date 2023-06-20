#include <stdio.h>

void print_alphabet(void)
{
	int ch;

	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
