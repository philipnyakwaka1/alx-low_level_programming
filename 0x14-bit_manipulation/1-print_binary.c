#include "main.h"
/**
 * _strlen - prints string length
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
 * print_binary - prints binary
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	char *s;
	int i, j, bin, len;
	size_t num;

	i = 0;
	num = n;
	if (n == 0)
	{
		_putchar('0');
	}
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
		{
			s[i] = '1';
		}
		else
		{
			s[i] = '0';
		}
		n = n >> 1;
		i++;
	}
	s[i] = '\0';
	len = _strlen(s);
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	free(s);

}
