#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of command line argumens
 * @argv: number of command line arguments
 * Return: 0 on success, else returns 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *p;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			len = strlen(p);
			for (j = 0; j < len; j++)
			{
				if (!(p[j] >= '0' && p[j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
