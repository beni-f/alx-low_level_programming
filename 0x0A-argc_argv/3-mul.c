#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argv: a pointer to a character array
 * @argc: length of the command line argument
 *
 * Return: returns 0
*/
int main(int argc, char *argv[])
{
	int i, product;

	if (argc == 1)
	{
		printf("Error\n");
	}

	for (i = 1; i < argc; i++)
	{
		product = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", product);
		break;
	}

	return (0);
}
