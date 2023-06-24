#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;

	for (i = 1; i <= 50; i++)
	{
		sum = i + (i + 1);
	}
	
	printf("%i\n", sum);
}
