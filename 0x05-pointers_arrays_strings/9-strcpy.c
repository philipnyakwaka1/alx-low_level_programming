#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = 0;

	while (src[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
