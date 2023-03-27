#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * @a: int whose value is to be swiped
 * @b: int whose value is to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
