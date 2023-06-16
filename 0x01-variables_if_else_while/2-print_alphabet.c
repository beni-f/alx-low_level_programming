#include <stdio.h>
/**
 * main - prints out all lower case alphabets
 * Return: returns 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
