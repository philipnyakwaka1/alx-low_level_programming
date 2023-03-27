#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int i, j;

	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

