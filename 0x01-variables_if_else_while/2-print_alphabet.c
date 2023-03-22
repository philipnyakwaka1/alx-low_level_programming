#include<stdio.h>

/**
 * main - the main functions prints a-z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a_z;

	a_z = 'a';

	for (a_z = 'a'; a_z < 'z'; a_z++)
	{
		putchar(a_z);
	}
	putchar('\n');
	return (0);
}
