#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int x;
	char *c;
	char *separator;

	separator = "";
	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 's':
					c = va_arg(list, char *);
					if (c == NULL)
					{
						c = "(nil)";
					}
					printf("%s%s", separator, c);
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
		printf("\n");
		va_end(list);
	}
}


