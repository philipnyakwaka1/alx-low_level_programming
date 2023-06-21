#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a % b);
}
/**
 * op_mod - finds modulus of two numbers
 * @a: number 1
 * @b: number 2
 * Return: a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
