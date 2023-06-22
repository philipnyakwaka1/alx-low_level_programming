#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _strlen - prints string length
 * @s: input string
 * Return: string length
 */
int _strlen(const char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to print between numbers
 * @n: number number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (_strlen(separator) != 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
		printf("\n");
	}
}
