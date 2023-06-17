#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds length of a string;
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates two string
 * @s1: input string
 * @s2: input string
 * @n: n bytes of string s2 to be concatenated
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by first n bytes of s2, and null terminated
 * or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x, y, i, j, k;

	x = _strlen(s1);
	y = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= y)
		s3 = malloc(sizeof(char) * (x + y + 1));
	else if (y > n)
		s3 = malloc(sizeof(char) * (x + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		s3[i] = s1[i];
	if (n >= y)
	{
		k = i;
		for (j = 0; j < y; j++)
		{
			s3[k] = s2[j];
			k++;
		}
		s3[k] = '\0';
	}
	else if (y > n)
	{
		k = i;
		for (j = 0; j < n; j++)
		{
			s3[k] = s2[j];
			k++;
		}
		s3[k] = '\0';
	}
	return (s3);
}
