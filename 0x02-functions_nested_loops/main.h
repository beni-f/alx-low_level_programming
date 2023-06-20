#include <stdio.h>
void print_alphabet(void);

int main (void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		
	}
	putchar('\n');
}
