#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: input string
 * @s2: input string
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int x, y, i, j, k;

	x = 0;
	y = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	s3 = malloc(sizeof(char) * (x + y + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		s3[i] = s1[i];
	}
	k = i;
	while (j < y)
	{
		s3[k] = s2[j];
		j++;
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
