#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of command line arguments passed to it
 * @argc: number of command line arguments
 * @argv: an array of arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
