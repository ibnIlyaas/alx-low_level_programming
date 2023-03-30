#include "main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * @str: string param
 * Return: str
 */

char *string_toupper(char *str)
{
	int index = 0; /*indicates location of string elements*/

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 'a' + 'A';
		}
		index++;
	}
	return (str);
}

