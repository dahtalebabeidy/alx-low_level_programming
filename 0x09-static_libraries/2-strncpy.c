#include "main.h"

/**
* _strncpy - function copy a string to an another
*
* @dest: first parametre
* @src: second parametre
* @n: third parametre
*
* Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
