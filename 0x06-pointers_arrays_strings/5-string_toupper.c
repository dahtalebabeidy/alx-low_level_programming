#include "main.h"

/**
* string_toupper - change from lower to upper
*
* @str: parametre
*
* Return: char s
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] == str[i] - 32;
		}
	}
	return (str);
}
