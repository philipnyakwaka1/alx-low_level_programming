#include "main.h"
/**
 * _puts - prints a string followed by newline to stdout
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]++);
	}
	_putchar('\n');
}
