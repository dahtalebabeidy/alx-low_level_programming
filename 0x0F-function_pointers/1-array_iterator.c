#include "function_pointers.h"

/**
* array_iterator - function
*
* @array: parametre
* @size: size
* @action: parametre
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
