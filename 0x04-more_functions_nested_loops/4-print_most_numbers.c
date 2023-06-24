#include "main.h"

/**
* print_numbers - print 0 - 9
*
* Return: always 0 (succes)
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}

	_putchar('\n');
}
