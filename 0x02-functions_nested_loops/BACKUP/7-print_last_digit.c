#include "main.h"
/**
 * print_last_digit - prints last digit of a numebr
 * @i: the int
 * Return: last digits
 */
int print_last_digit(int i)
{
	int x;

	x = (i % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}

	_putchar(x + '0');
	return (x);
}
