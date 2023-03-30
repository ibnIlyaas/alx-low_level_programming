#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes each word in a string
 * @s: string parameter
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && isspace(s[i - 1])
				|| s[i - 1] == '.')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
