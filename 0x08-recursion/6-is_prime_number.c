#include "main.h"
/**
 * prime_checker - checks for prime number
 * @num: input number
 * @b: a number that iterates by 1
 * Return: 1 if num is prime, else it returns 0
 */
int prime_checker(int num, int b)
{
	if (num < 0 || num == 0 || num == 1)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	if ((num % b == 0) && b != num)
	{
		return (0);
	}
	if (num == b)
	{
		return (1);
	}
	return (prime_checker(num, b + 1));
}
/**
 * is_prime_number - checks for prime number
 * @n: input number
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
