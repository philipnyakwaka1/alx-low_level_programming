#include "main.h"
/**
 * times_table - prints 9x9 tables, starting with o
 *
 * Return: times table
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = y * z;
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
				_putchar(',');
				_putchar(' ');
				_putchar((z % 10) + '0');
			}
			else
				_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
