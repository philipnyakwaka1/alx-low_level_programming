#include "main.h"
/**
 * print_line - draws a straight line on the terminal
 * @n: n times to print
 *
 * Return: a straight line
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
