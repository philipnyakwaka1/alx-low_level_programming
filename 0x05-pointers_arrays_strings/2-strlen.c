#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: input string
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
