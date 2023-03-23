#include "main.h"
/**
 * print_numbers - prints characters 0 to 9
 *
 * Return: returns numbers 0-9
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
