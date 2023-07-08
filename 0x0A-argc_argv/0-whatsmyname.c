#include <stdio.h>
/**
 * main - prints the file name
 *
 * @argv: pointer of character array
 * @argc: length of command line argument
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
