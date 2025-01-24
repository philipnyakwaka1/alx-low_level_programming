#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 followed by a new number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, total;

	total = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
