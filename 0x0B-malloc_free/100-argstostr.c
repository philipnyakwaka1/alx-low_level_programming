#include "main.h"
#include <stdlib.h>
/**
 * _strlen - determines the length of a string
 * @str: input string
 * Return: string length
 */
int _strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: an array of arguments
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	char *s;
	int n, i, j, k, l;

	n = 0;
	k = 0;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n += _strlen(av[i]);
	}
	p = malloc(sizeof(char) * (n + 1 + ac));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		s = av[j];
		for (l = 0; l < _strlen(s); l++)
		{
			p[k] = s[l];
			k++;
		}
		p[k] = '\n';
		k++;
	}

	p[k + 1] = '\0';


	return (p);
}

