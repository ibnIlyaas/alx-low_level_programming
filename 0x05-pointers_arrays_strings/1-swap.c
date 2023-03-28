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
	*a = *b;
	*b = *a;
}
