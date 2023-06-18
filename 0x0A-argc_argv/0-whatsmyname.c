#include "main.h"
#include <stdio.h>
/**
 * main - prints the programs name
 * @argc: number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0 is success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
