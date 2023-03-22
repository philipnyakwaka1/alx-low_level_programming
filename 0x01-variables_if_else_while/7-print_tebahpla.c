#include<stdio.h>

/**
 * main - prints a-z in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	char z_a;

	z_a = 'z';
	for (z_a = 'z'; z_a >= 'a'; z_a--)
	{
		putchar(z_a);
	}
	putchar('\n');
	return (0);
}
