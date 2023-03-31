#include "main.h"

/**
 * print_number - prints integer w/ long, arrays or pointrs
 * @n: integer param
 */

void print_number(int n)
{
	unsigned int t, d, p = n;
	double start = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			p = n * -1;
			_putchar('-');
		}
		while (start <= positive)
			start = start * 10;
		t = start / 10;

		while (t >= 1)
		{
			d = p / t;
			_putchar(d + '0');
			p = (p - (t * d);
			t = t / 10;
		}
	}
}
