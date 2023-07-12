#include <stdio.h>
#include <stdlib.h>
/**
 * main - MAIN entry
 *
 * @argc: number of command line argument passed
 * @argv: string
 *
 * Return: returns 0 or 1
*/
int main(int argc, char *argv[])
{

	int cent, count = 0;

	if (argc == 2)
	{
		cent = atoi(*(argv + 1));

		while (cent > 0)
		{
			if (cent % 25 == 0)
			{
				cent -= 25;
				count++;
			}
			else if (cent % 10 == 0)
			{
				cent -= 10;
				count++;
			}
			else if (cent % 5 == 0)
			{
				cent -= 5;
				count++;
			}
			else if (cent % 1 == 0)
			{
				cent -= 1;
				count++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", count);

	return (0);
}
