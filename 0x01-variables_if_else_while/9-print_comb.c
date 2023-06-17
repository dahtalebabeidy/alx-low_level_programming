#include <stdio.h>

/**
* main - Entry point
* Description: print digit from 0 to 9 separated by ,
* Return: always 0 (succes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
