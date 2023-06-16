#include <stdio.h>
/**
 * main - prints all hte numbers of base 16 in lowercase
 * Return: returns 0
*/
int main(void)
{
	for (int ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (int ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
