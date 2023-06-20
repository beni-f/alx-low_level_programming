#include <stdio.h>

int main(void)
{
	int digit1, digit2;
        for (digit1 = 0; digit1 <= 2; digit1++)
        {
		for (digit2 = 0; digit2 <= 3; digit2++)
                {
			putchar(digit1);
 
                        putchar(digit2);
 
                        putchar(':');
                        for (digit1 = 0; digit1 <= 5; digit1++)  
                        {
				for (digit2 = 0; digit2 <= 9; digit2    ++)
                                {
					putchar(digit1);

                                        putchar(digit2);
                                }
                        } 
                 }
                 putchar('\n');
         }
}
