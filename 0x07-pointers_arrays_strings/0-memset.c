#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: the constant byte to fill memory area
 * @n: First n bytes to be filled
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
