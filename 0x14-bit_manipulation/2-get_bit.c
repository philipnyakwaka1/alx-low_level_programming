#include "main.h"
/**
 * _strlen - prints string length
 * @str: input string
 * Return: string length
 */
unsigned int _strlen(char *str)
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
 * get_bit - returns the value if a bit at a given index
 * @n: input number
 * @index: input index
 * Return: value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *s, *c;
	unsigned int len, len1;
	int i, j, k, bin;
	size_t num;

	i = 0;
	num = n;
	if (n == 0)
		return (0);
	while (num > 0)
	{
		num = num >> 1;
		i++;
	}
	s = malloc(sizeof(char) * (i));
	i = 0;
	while (n > 0)
	{
		bin = n & 1;
		if (bin)
			s[i] = '1';
		else
			s[i] = '0';
		n = n >> 1;
		i++;
	}
	s[i] = '\0';
	len = _strlen(s);
	c = malloc(sizeof(char) * len + 1);
	k = 0;
	for (j = len - 1; j >= 0; j--)
	{
		c[k] = s[j];
		k++;
	}
	c[k] = '\0';
	len1 = _strlen(c);
	if (index < len1)
		return (c[index] - '0');
	return (-1);
}
