#include "holberton.h"
/**
 * _strncat - concatenate strings, defining the size of second string
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: input string
 * @src: input string
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (*(dest + x) != '\0')
		x++;

	while (*(src + y) != '\0' && x < 97 && y < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	*(dest + x) = '\0';
	return (dest);
}
