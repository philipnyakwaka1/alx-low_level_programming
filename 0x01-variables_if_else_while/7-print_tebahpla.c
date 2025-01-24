#include <stdio.h>
/**
 * main -  prints the last digit of the number stored in the variable n
 *
 * Return: returns 0.
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
