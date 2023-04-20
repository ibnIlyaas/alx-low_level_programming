#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string b/n numbers
 * @n: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (separator == NULL)
		separator = "\0";
	va_start(p, n);
	if (n != 0)
	{
		for (i = 0; i < (n - 1); i++)
			printf("%d%s", va_arg(p, int), separator);
		printf("%d\n", va_arg(p, int));
	}
	else
		printf("\n");
	va_end(p);
}
