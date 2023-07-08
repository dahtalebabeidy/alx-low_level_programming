#include "main.h"

/**
* _strlen - function return the length
*
* @s: parametre of function
*
* Return: the length of *s
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
