#include <stdio.h>
/**
 * main - this funciton prints all lower case alphabets except e and q
 * Return: returns 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}

	}


	putchar('\n');

	return (0);
}

