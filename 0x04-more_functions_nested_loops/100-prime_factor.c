#include <math.h>
#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 * Return: returns 0
*/
int main(void)
{
	long int n = 612852475143;

	long int largestnum = 2;

	long int i;

	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0 && i >= largestnum)
		{
			largestnum = i;
		}
	}

	printf("%ld\n", largestnum);

	return (0);
}
