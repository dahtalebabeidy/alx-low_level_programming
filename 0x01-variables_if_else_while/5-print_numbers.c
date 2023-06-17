#include <stdio.h>

/**
* main - Entry point
* Description: print digit from 0 to 9
* Return: always 0 (succes)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
