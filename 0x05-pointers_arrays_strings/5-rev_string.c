#include "main.h"

/**
* rev_string - function that reverse a string
*
* @s: parametre of function
*
* Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (i = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
