#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 *  to flip to get from one number to another
 *  @n: input number
 *  @m: input number
 *  Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t x, y;
	int counter, i;


	y = n ^ m;
	i = 63;
	counter = 0;
	while (i >= 0)
	{
		x = y >> i;
		if (1 & x)
			counter = counter + 1;
		i--;
	}
	return (counter);
}
