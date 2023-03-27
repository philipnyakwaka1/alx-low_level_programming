#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: the n integer
 *
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				result = a * b;
				if (b == 0)
					_putchar(result + '0');
				else if (result < 0 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
