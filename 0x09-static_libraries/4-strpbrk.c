#include "main.h"
/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: input string
 * @accept: bytes sought-after
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y, i, j;

	x = 0;
	y = 0;
	while (*(s + x) != '\0')
	{
		x++;
	}
	while (*(accept + y) != '\0')
	{
		y++;
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
