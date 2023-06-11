#include "main.h"

/**
 * check_prime - checks for prime number
 * @n: number
 * @den: denominator
 * Return: 1 or 0 or number
 */

int check_prime(int n, int den)
{
	if (n == den)
		return (1);
	if (n % den == 0)
		return (0);
	return (check_prime(n, den + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int divisor =  3;
	
	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(n, den));
}
