#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: integer param
 * Return: -1 if n < 0 else factorial of n
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	fact = n * factorial(n - 1);
	return (fact);
}
