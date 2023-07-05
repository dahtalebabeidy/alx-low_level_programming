#include "main.h"

/**
* is_prime_number - check if the number is prime
*
* @n: parametre
* @o: parametre
*
* Return: int
*/

int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - check if the number is prime
*
* @n: parametre
* @o: paramtre
*
* Return: int
*/

int check_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, o + 1));
}
