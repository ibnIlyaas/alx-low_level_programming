#include <stdio.h>
/**
 *main - Prints hexadecimals
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	for (a = 48; a < 58; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
