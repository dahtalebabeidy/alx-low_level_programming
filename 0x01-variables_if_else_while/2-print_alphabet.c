#include <stdio.h>

/**
*main - entry point
*
*Description: A C program print all alphabet
*
*Return: always 0 (succes)
*/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
