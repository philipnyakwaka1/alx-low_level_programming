#include "main.h"
/**
 * times_table - prints 9x9 tables, starting with o
 *
 * Return: times table
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = y * x;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z >= 10)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if (z < 10 && y != 0)
			{
				_putchar(' ');
				_putchar((z % 10) + '0');
			}
			else
				_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
