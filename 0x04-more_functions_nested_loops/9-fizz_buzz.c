#include <stdio.h>
/**
 * main - prints fizz buzz
 *
 * Return: returns nothing
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}

		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}

		else if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %i", a);
		}
	}

	printf("\n");
}
