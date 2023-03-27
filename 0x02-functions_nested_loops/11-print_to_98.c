#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers n to 98
 * @i: interger
 *
 * Return: success (0)
 */
void print_to_98(int i)
{
	int x, y;

	if (i <= 98)
	{
		for (x = i; x <= 98; x++)
		{
			if (i != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (i >= 98)
	{
		for (y = i; y >= 98; y++)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else if (y == 98)
			{
				printf("%d\n", y);
			}
		}
	}
}
