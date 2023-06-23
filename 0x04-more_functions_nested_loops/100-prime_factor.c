#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number
 * 
*/
int main(void)
{
	long int a = 612852475143;

 	long int largestnum = 1;

	long int i = 2;


	for (i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
		{
			if(i >= largestnum)
			{
				largestnum = i;
			}
  		}
	}
	
	printf("%ld\n", largestnum);

	return (0);
}
