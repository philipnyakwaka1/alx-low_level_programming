#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- prints strings followed by a new line
 * @separator: string to print between strings
 * @n: number of string arguments to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	if (separator == NULL)
		separator = "";
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
