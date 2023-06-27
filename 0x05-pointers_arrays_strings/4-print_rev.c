#include "main.h"

/**
* print_rev - function that print a string in reversing
*
* @s: parametre of function
*
* Return: Nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
