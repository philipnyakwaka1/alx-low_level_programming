#include <stdio.h>
/**
 * main - finds largest prime factor of 612852475143
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long i, j;

	i = 612852475143;
	for (j = 2; j < 612852475143; j++)
	{
		while (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%lu", j);
	putchar('\n');
	return (0);
}

