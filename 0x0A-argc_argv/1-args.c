#include <stdio.h>
/**
 * main - prints the numbers of arguments passed
 *
 * @argv: pointer to a character array
 * @argc: length of the command line argument
 *
 * Return: returns 0
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
