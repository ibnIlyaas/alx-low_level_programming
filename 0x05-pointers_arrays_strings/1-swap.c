#include "main.h"

/**
 * swap_int - swaps two integers using pointers
 *
 * @a: interger param
 * @b: integer param
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = j;
	*b = i;
}
