#include "function_pointers.h"

/**
* print_name - function
*
* @name: parametre
* @f: parametre
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
