#include <stdio.h>
/**
 * main - prints combinations of numbers from three digits
 * Return: returns 0
*/
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = '0'; digit2 <= '9'; digit2++)
		{
			for (digit3 = '0'; digit3 <= '9'; digit3++)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					putchar(digit1);

					putchar(digit2);

					putchar(digit3);

					if (digit1 != '7')
					{
						putchar(',');

						putchar(' ');
					}

				}
			}
		}
	}

	putchar('\n');

	return (0);

}
