#include <stdio.h>

/**
*main - entry point
*
*Description: A C program print all alphabet in lowercase reverse
*
*Return: always 0 (succes)
*/

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
