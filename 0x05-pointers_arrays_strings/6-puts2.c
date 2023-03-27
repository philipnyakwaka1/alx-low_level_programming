#include "main.h"
/**
 * rev_string - reverses string
 * @s: input
 */
void rev_string(char *s)
{
	int i, j, k;

	char c;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	k = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k--] = c;
	}
}
