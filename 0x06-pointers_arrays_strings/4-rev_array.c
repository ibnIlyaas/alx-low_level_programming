#include "main.h"

/**
 * reverse_array - reverses the elements of an array of ints
 * @a: array name
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int index; /* variable to show index location of elements*/
	int temp; /* varable to temporarily store the value of the exchanged element*/

	index = 0;
	while (index < n / 2)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
		index++;
	}
}
