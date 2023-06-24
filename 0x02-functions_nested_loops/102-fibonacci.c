#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;

	while (i <= 50)
	{
		sum = i + ++i;
	}
	
	printf("%i\n", sum);
}
