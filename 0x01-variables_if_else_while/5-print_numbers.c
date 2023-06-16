#include <stdio.h>
/**
 * main - this function prints numbers from 0-9
 * Return: returns 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

