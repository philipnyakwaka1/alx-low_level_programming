#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0 is sucess, else 1
 */
int main(int argc, char *argv[])
{
	int change, count, rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("%d\n", count);
	}
	if (change >= 25)
	{
		if (change / 25 == 0 && change % 25 != 0)
		{
			change = change;
		}
		else if (change / 25 != 0 && change % 25 == 0)
		{
			count = change / 25;
			printf("%d\n", count);
			return (0);
		}
		else if (change / 25 != 0 && change % 25 != 0)
		{
			count += change / 25;
			rem = change / 25;
			change -= rem * 25;
		}
	}
	if (change >= 10)
	{
		if (change / 10 == 0 && change % 10 != 0)
		{
			change = change;
		}
		else if (change / 10 != 0 && change % 10 == 0)
		{
			count += change / 10;
			printf("%d\n", count);
			return (0);
		}
		else if (change / 10 != 0 && change % 10 != 0)
		{
			count += change / 10;
			rem = change / 10;
			change -= rem * 10;
		}
	}
	if (change >= 5)
	{
		if (change / 5 == 0 && change % 5 != 0)
		{
			change = change;
		}
		else if (change / 5 != 0 && change % 5 == 0)
		{
			count += change / 5;
			printf("%d\n", count);
			return (0);
		}
		else if (change / 5 != 0 && change % 5 != 0)
		{
			count += change / 5;
			rem = change / 5;
			change -= rem * 5;
		}
	}
	if (change >= 2)
	{
		if (change / 2 == 0 && change % 2 != 0)
		{
			change = change;
		}
		else if (change / 2 != 0 && change % 2 == 0)
		{
			count += change / 2;
			printf("%d\n", count);
			return (0);
		}
		else if (change / 2 != 0 && change % 2 != 0)
		{
			count += change / 2;
			rem = change / 2;
			change -= rem * 2;
		}
	}
	if (change >= 1)
	{
		if (change / 1 == 0 && change % 1 != 0)
		{
			change = change;
		}
		else if (change / 1 != 0 && change % 1 == 0)
		{
			count += change / 1;
			printf("%d\n", count);
			return (0);
		}
	}
	return (0);
}

