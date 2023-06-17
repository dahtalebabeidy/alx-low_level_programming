#include <stdio.h>

/**
* main - Entry point
* Description: print alphabet exepct q and e
* Return: always 0 (succes)
*/

int main(void)
{
	char a = 'a';

	while (a < 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
