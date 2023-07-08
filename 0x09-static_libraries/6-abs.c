#include "main.h"

/**
* _abs - print abs of number
*
* @n: takes integer type input for function
*
* Return: always 0 (succes)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
