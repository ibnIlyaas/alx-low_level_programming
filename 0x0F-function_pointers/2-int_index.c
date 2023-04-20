#include <stdio.h>

/**
 * int_index - searches for an int
 * @array: array to be searched
 * @size: arraysize
 * @cmp: pointer to compare elements
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array > 0 && cmp > 0 && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
