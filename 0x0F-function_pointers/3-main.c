#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - performs arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, ans;
	int (*s)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	s = get_op_func(argv[2]);
	b = atoi(argv[3]);
	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ans = s(a, b);
	printf("%d\n", ans);
	return (0);
}
