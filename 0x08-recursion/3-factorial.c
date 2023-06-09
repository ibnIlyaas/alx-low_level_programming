#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: integer param
 * Return: -1 if error or factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n-1));
}
