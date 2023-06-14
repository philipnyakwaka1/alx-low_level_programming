#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character that is sought-after
 * Return: the pointer to the first occurence of the character
 * or NULL if the character is missing
 */
char *_strchr(char *s, char c)
{
	int x;
	int i = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
