#include "main.h"

/**
* swap_int - funciton that swap the values of two integers
*
* @a: first parametre
* @b: second paremetre
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
