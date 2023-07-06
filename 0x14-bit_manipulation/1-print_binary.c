#include "main.h"
/**
 * print_binary - prints binary
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	size_t val;
	int a, b;

	a = 63;
	b = 0;
	while (a >= 0)
	{
		val = n >> a;
		if (1 & val)
		{
			_putchar('1');
			b = b + 1;
		}
		if (b)
		{
			_putchar('0');
		}
		a--;
	}
	if (!b)
	{
		_putchar('0');
	}
}
