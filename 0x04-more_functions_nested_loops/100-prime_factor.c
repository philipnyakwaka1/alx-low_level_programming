#include <stdio.h>
#include <math.h>
/**
 * main - finds largest prime factor of 612852475143
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long i, j, k;

	k = -1;
	i = 612852475143;
	while (i % 2 == 0)
	{
		k = 2;
		i /= 2;
	}
	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i % j == 0)
		{
			k = j;
			i = i / j;
		}
	}
	if (i > 2)
	{
		k = i;
	}
	printf("%ld\n", k);
	return (0);
}
