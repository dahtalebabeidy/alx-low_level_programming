#include <stdio.h>

/**
*main - entry point
*
*Description: A C program print all numbers in base 16
*
*Return: always 0 (succes)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
