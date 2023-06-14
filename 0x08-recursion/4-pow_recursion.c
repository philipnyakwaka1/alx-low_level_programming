#include "main.h"
/**
 * _pow_recursion - returns the power of a number
 * @x: input number
 * @y: input power
 * Return: -1 if y is less than 0, else it returns the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x < 0)
	{
		x = -x;
		return (-(x * _pow_recursion(x, y - 1)));
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
