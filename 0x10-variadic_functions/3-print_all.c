#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: argument type
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list p;
	char *s, *separator;

	va_start(p, format);
	separator = "";
	if (format)
	{
		while (format[i]);
		{
			switch (format([i]))
			{
				case 'c':
					printf("%s%c", separator, va_arg(p, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(p, int));
					break;
				case 'f':
					s = va_arg(p, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break
				default:
						i++;
						continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(p);
}
