#include <stdio.h>
/**
 * main - prints both lower and upper case alphabets
 * Return: returns 0
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	char chr = 'A';

	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
