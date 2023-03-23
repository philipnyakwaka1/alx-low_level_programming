#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet then \n
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	char c;

	i = 1;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
