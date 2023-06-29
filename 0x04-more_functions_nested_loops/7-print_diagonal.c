#include "main.h"

/**
* print_diagonal - prints line a diagonal
*
* @n: input for function
*
* Return: Nothing
*/

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == p)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
