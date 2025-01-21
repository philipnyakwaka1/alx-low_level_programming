#include<stdio.h>

/**
 * main - prints a_z lowercase then uppercase
 *
 * Return: return 0 is success
 */

int main(void)
{
	char a_z;

	a_z = 'a';
	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		putchar(a_z);
	}
	for (a_z = 'A'; a_z <= 'Z'; a_z++)
	{
		putchar(a_z);
	}
	putchar('\n');
	return (0);
}
