#include <stdio.h>
/**
 * main - prints every arguments in a new line
 *
 * @argv: pointer to a character array
 * @argc: length of the command line argument
 *
 * Return: returns 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
