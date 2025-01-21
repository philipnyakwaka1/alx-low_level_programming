#include<stdio.h>

/**
 * main - prints all base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char a_f;

	i = 0;
	a_f = 'a';
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (a_f = 'a'; a_f <= 'f'; a_f++)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
