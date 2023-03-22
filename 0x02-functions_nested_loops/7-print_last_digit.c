#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: integer parameter
 *Return: last digit of a number
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		j = (n % 10) * -1;
	else
		j  = n % 10;
	_putchar(j + '0');
	return (j);
}
