#include "main.h"
/**
 * factorial - calculates the factorial of a positive integer
 * @n: Input number
 * Return: -1 if error, else returns the factorial of that number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
