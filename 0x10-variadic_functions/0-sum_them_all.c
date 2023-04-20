#include <stdio.h>

/**
 * sum_them_all - returns sum of all its params
 * @n: number of params
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t i;
	int sum;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(p);
	return (sum);
}
