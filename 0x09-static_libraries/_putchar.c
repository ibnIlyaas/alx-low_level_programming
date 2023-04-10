#include <unistd.h>
/**
 * _putchar - Prints putchar
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
