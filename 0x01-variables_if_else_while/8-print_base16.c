#include <stdio.h>
/**
 * main -  prints the last digit of the number stored in the variable n
 *
 * Return: returns 0.
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
