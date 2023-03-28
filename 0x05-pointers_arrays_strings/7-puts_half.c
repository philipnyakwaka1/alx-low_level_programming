#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int x, y, z;

	z = 0;

	for (x = 0; str[x] != '\0'; x++)
		z++;
		y = (z / 2);

		if ((z % 2) == 1)
			y = ((z + 1) / 2);
		for (x = y; str[x] != '\0'; x++)
			_putchar('\n');
		_putchar('\n');
}
