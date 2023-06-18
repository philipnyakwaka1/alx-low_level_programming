#include "main.h"
#include <stdio.h>
/**
 * main - prints the product of two numbers
 * @argc: count of arguments
 * @argv: an array of arguments
 * Return: I if error, else returns 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
