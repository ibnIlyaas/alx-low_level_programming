#include "main.h"

/**
 * root - finds root
 * @n: number
 * @r: root of number
 * Return: -1 or square root
 */

int root(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (root(n, r + 1));
}

/**
 * _sqrt_recursion - calculates natural square root
 * @n: number
 * Return: -1 or square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root(n, 0));
}
