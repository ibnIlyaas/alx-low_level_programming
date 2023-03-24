#include "main.h"
/**
 * print_line - prints a line based on n
 *
 * @n: parameter input
 */

void print_line(int n)
{
	int i = n;
	
	for (i = n; i > 0; i--)
		_putchar('_');
	
	_putchar('\n');
}
