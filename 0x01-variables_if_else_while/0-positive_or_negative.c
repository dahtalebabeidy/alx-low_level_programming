#include <stdlib.h>
#include <time.h>

/**
*main - entry point
*
*Description: A C program check if number is positive or negative or zero
*
*Return: always 0 (succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive");
	else if (n == 0)
		printf("%d is zero");
	else
		printf("%d is negative");
	return (0);
}
