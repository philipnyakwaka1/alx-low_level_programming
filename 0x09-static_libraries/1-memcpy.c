#include "main.h"
/**
 * _memcpy - copies memory data from one memory area to another
 * @dest: destination memory area of copied data
 * @src: source memory area
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
