#include "main.h"
/**
 * print_alphabet_x10 - funx 2 print alphabets in lc x10
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char letters;

	while(j < 10)
	{
		letters = 'a';
		while(letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		j++;
	}
