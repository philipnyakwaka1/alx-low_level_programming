#include <stdio.h>
/**
 * main -  prints the last digit of the number stored in the variable n
 *
 * Return: returns 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
