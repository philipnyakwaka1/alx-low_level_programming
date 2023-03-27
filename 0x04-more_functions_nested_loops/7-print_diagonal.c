#include "main.h"
/**
 * print_diagonal - draws diagonal on the terminal
 * @n: n number of times to be printed
 *
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
