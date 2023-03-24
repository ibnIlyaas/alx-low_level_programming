#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: interger param
 */

void print_diagonal(int n)
{
	int line;
	int dist;

	if (n > 0)
	{
		for (line =  1; line <= n; line++)
		{
			for (dist = 1; dist < line; dist++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
