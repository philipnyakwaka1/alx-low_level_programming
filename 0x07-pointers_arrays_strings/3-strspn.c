#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: input bytes
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, m;
	unsigned int n;

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	n = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	while (*(accept + j) != '\0')
	{
		j++;
	}
	for (m = 0; m < j; m++)
	{
		for (k = 0; *(s + k) != ' ' && *(s + k) != '\0'; k++)
		{
			if (*(s + k) == *(accept + m))
			{
				n++;
			}
		}
	}
	return (n);
}
