#include <stdio.h>
/**
 * main - the main functions prints a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
