#include <stdio.h>

/**
 * array_iterator - executes funx as param on each array element
 * @array: array pointer
 * @size: array size
 * @action: pointer to a funx
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
