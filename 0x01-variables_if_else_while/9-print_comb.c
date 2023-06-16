#include <stdio.h>
/**
 * main - this function returns numbers from 0-9 with commas
 * Return: returns 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');

			putchar (' ');
		}
	}

	putchar('\n');

	return (0);
}
