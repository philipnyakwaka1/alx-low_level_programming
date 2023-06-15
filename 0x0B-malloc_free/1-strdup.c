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

	while (str[x] != '\0')
	{
		x++;
	}

	s = malloc(sizeof(char) * (x + 1));

	if (str == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		s[i] = str[i];
	}
	s[x] = '\0';
	return (s);
}
