#include <stdio.h>
/**
 * main - prints 0-9 without char
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}