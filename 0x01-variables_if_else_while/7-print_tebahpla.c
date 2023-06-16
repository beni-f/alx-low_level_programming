#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 * Return: returns 0
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
