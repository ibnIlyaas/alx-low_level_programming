#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes each word of a string
 * @s: string to be capitalized
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] i<= 'z' && isspace(s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
