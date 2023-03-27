#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = a;
	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
