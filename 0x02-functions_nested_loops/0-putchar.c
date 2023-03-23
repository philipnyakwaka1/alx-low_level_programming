#include<stdio.h>

/**
 * _putchar - prints _putchar
 * @c: character
 *
 * Return: _putchar
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
