#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: input number
 * @index: input index
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t val;

	while (index < 63)
	{
		val = 1 << index;
		*n = *n & ~val;
		return (1);
	}
	return (-1);
}
