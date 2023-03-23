#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: returns 0
 */

void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
}
