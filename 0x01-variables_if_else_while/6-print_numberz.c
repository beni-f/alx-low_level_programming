#include <stdio.h>
/**
 * main - function that prints numbers using int data type and putchar function
 * Return: returns 0
*/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
