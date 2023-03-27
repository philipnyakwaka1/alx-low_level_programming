#include "main.h"
/**
 * print_diagonal - draws diagonal on the terminal
 * @n: n number of times to be printed
 *
 * Return: a diagonal line
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x < n; x++)
		{
			for (y = 1; y < n; y++)
			{
				if (y == 1)
					_putchar('\\');
				else if (y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
