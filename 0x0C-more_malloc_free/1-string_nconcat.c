#include "main.h"
#include <stdlib.h>
/**
 * str_nconcat - concatenates two string
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

	x = y = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	s3 = malloc(sizeof(char) * (x + y + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		s3[i] = s1[i];
	if (n >= y)
	{
		k = i;
		while (j < y)
		{
			s3[k] = s2[j];
			j++;
			k++;
		}
		s3[k] = '\0';
	}
	else if (y > n)
	{
		k = i;
		while (j < n)
		{
			s3[k] = s2[j];
			j++;
			k++;
		}
		s3[k] = '\0';
	}
	return (s3);
}
