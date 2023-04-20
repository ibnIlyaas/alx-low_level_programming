#include <stdio.h>

/**
 * print_name - prints name
 * @name: name of person
 * @f: funx pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
