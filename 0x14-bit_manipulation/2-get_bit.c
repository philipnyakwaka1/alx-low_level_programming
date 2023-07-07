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
	char *s;
	unsigned int len;
	int i, bin;
	size_t num;

	if (index > 63)
		return (-1);
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
	if (index < len)
		return (s[index] - '0');
	return (-1);
}
