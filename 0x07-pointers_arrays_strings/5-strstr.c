#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: input string
 * @needle: input substring
 * Return: beginning of the located substring
 * , or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, i, p, m;

	x = 0;
	y = 0;
	p = 0;
	while (*(haystack + x) != '\0')
	{
		x++;
	}
	while (*(needle + y) != '\0')
	{
		y++;
	}
	for (i = 0; i < x; i++)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			p += i;
		}
		else
		{
			return (0);
		}
	}
	for (m = p; m < x && *(needle + m) != '\0'; m++)
	{
		if (*(haystack + m) != *(needle + m))
		{
			return (0);
		}
	}
	return (haystack + p);
}
