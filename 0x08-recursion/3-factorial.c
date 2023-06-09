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
	return (facrotial(n * (n-1)));
}
