#include<stdio.h>

/**
 * main - prints 0-9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
