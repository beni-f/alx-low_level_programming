#include <stdio.h>
/**
 * main - prints both lower and upper case alphabets
 * Return: returns 0
*/

int main(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	int upper_case = 'A';

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

	putchar('\n');

	return (0);
}
