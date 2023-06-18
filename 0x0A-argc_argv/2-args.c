#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it gets
 * @argc: number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0 is always success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
