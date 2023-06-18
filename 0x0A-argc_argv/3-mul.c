#include <stdio.h>
#include <stdlib.h>
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
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
