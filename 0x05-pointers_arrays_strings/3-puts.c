#include "main.h"

/**
* _puts - function that print a string
*
* @str: parametre of the function
*
* Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchat(*str);
		str++;
	}
	_putchar('\n');
}
