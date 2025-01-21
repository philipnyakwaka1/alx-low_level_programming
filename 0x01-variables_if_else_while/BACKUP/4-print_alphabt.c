#include<stdio.h>

/**
 * main - prints a_z except q and e
 *
 * Return: returns 0 (success)
 */

int main(void)
{
	char a_z;

	a_z = 'a';
	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		if (a_z != 'q' && a_z != 'e')
			putchar(a_z);
	}
	putchar('\n');
	return (0);
}
