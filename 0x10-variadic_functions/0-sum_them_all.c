#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
