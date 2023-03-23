#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except 2&4
 *
 * Return: returns numbers 0 to 9 except 2&4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2')
		{
			if (c != '4')
			{
				_putchar(c);
			}
		}
	_putchar('\n');
}
