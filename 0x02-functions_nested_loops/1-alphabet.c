#include "main.h"
/**
 * print_alphabet - the function to be executed
 * Return: returns 0
 *
 * Description - 'prints lowercase alphabets'
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
