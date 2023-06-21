#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: o is success
 */
int main(int argc, char *argv[])
{
	char *n;
	int x, y;

	if (argc != 2)
		printf("Error\n");
		return (1);

	x = atoi(argv[1]);

	if (x < 0)
		printf("Error\n");
		exit(2);

	n = (char *)main;
	y = 0;
	while (y < x)
	{
		if (y == (x - 1))
		{
			printf("%02hhx\n", n[y]);
			break;
		}
		printf("%02hhx ", n[y]);
		y++;
	}
	return (0);
}
