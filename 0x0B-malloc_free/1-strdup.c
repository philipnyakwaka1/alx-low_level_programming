#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated string
 * @str: the string to be duplicated
 * Return: On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int x, i;
	char *s;

	x = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[x] != '\0')
	{
		x++;
	}

	s = malloc(sizeof(char) * (x + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
