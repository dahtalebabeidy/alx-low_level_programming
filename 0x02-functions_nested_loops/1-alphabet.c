#include "main.h"

/**
* print_alphabet - use _putchar to print alphabet
*
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
