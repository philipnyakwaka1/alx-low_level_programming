#include "main.h"
/**
 * root_checker - checks if root squared is equal to num
 * @num: input number
 * @root: number that increases by 1 each time the function is called
 * Return: -1 if num has no square root, else it returns root
 */
int root_checker(int num, int root)
{
	if (num < 0)
	{
		return (-1);
	}
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root > num)
	{
		return (-1);
	}
	return (root_checker(num, root + 1));
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: input number
 * Return: -1 if n has no square root, else it returns its square root
 */
int _sqrt_recursion(int n)
{
	return (root_checker(n, 0));
}
