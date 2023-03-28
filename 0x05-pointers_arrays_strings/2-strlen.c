#include "main.h"

/**
 * _strlen - length of string
 *
 *@s: string param
 *Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	for (*s; *s != '\0'; s++)
	{
		len++;
	}
	return(len);
}
