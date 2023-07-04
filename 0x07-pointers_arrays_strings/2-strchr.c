#include "main.h"

/**
* _strchr - strchr function
*
* @s: first input
* @c: second
*
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
